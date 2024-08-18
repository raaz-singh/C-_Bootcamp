#include<iostream>
using namespace std;

int getLength(char str[]){
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char str[], int size){
    int s = 0;
    int e = size - 1;
    while (s<=e)
    {
        swap(str[s], str[e]);
        s++;
        e--;
    }
} 

bool isPalindrone(char str[]){
    int size = strlen(str);
    int s = 0;
    int e = size - 1;
    
    while(s<=e){
        if(str[s] != str[e]) return false;
        else{
            s++;
            e--;
        }
    }
    return true;
}
int main(){
    char str[100] = "Hello";
    // cout << getLength(str);
    // reverse(str, 5);
    if(isPalindrone(str)){
        cout << "is palindrone";
    }
    else{
        cout << "not a palindrone";
    }
}