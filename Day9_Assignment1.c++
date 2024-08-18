#include<iostream>
using namespace std;

int main(){
//     char str[] = "Hello";
//     char str1[] = {'H', 'e', 'l', 'l', 'o'};

    // char str[100];
    // cout<< "Enter a string: " << endl;
    // // cin >> str;

    // cout<<"You Entered : " << str;

    // string str;
    // cout<< "Enter a string: " << endl;
    // // cin >> str;
    // getline(cin, str);
    // cout<<"You Entered : " << str;

    string str = "Hello World, world is beautiful";
    cout << str << endl;

    //cout << str.find("world");
    //cout<<str.rfind("world") <<endl;

    str.append(", this is added");
    cout << str << endl;
}