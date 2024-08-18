#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtBegin(Node *&head, int val)
{
    Node *newNode = new Node(val);
    // Node *temp = head;
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    else
    {
        newNode->next = head;
        head = newNode;
    }
}

bool search(Node *&head, int key)
{
    Node *temp = head;
    while (head->next != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deletion(Node *&head, int val)
{
    Node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

void deleteAtHead(Node *&head)
{
    Node *nodeToDelete = head;
    head = head->next;
    delete nodeToDelete;
}

void reverse(Node *&head)
{
    Node *prev = NULL;
    Node *next = NULL;
    Node *curr = head;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "--> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void removeDuplicasy(Node *head)
{
    Node *i = head;
    Node *temp = head;
    Node *j = temp->next;
    while (temp->next != NULL)
    {
        if (i == j)
        {
            temp = temp->next->next;
            head = head->next;
            delete temp->next;
        }
        else
        {
            temp = temp->next;
            head = head->next;
        }
    }
}

int main()
{
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 3);
    print(head);

    // insertAtBegin(head, 10);
    // insertAtBegin(head, 20);
    // print(head);

    // deletion(head, 20);
    // print(head);

    // cout << search(head, 10);

    // reverse(head);
    // print(head);
    removeDuplicasy(head);
    print(head);
    return 0;
}