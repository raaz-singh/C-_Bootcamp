#include <bits/stdc++.h>
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

void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);

    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }

    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtEnd(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void deletionAtHead(Node *&head)
{
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    Node *toDelete = head;

    temp->next = head->next->next;
    head = head->next;
    delete toDelete;
}

void deletion(Node *&head, int pos)
{
    if (pos == 1)
    {
        deletionAtHead(head);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }

    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}
void Display(Node *head)
{

    if (head == NULL)
    {
        return;
    }

    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

bool isCircular(Node *&head)
{
    if (head == NULL)
        return true;
    Node *temp = head;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
}

Node *floydDetectLoop(Node *&head) // LL contains loop or not
{
    if (head == NULL)
        return NULL;

    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        slow = slow->next;
        if (fast->next != NULL)
            fast = fast->next->next;
        if (slow == fast)
            return slow;
    }

    return NULL;
}

Node *getStartingNode(Node *head) // finding starting node where loop is starting
{
    if (head == NULL)
        return NULL;

    Node *interSection = floydDetectLoop(head);

    Node *slow = head;
    while (slow != interSection)
    {
        interSection = interSection->next;
        slow = slow->next;
    }
    return slow;
}

void removeLoop(Node *head)
{
    if (head == NULL)
        return;

    Node *startOfLoop = getStartingNode(head);
    // create temp var, iterate it till the last node of the loop
    Node* temp = startOfLoop;
    while (temp->next != startOfLoop)
    {
        temp=temp->next;
    }
    
    // point the next of last node to NULL
    temp->next=NULL;

}

int main()
{
    Node *head = NULL;
    insertAtHead(head, 15);
    insertAtHead(head, 30);
    insertAtHead(head, 45);
    insertAtHead(head, 60);
    insertAtHead(head, 75);
    Display(head);

    insertAtEnd(head, 90);
    insertAtEnd(head, 105);
    Display(head);
    cout << endl;

    // deletion(head, 3);
    // Display(head);

    // deletionAtHead(head); //not working
    // Display(head);

    // cout << floydDetectLoop(head);
    cout << getStartingNode(head);

    removeLoop(head);
}