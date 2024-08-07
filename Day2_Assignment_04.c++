#include <bits/stdc++.h>
using namespace std;
int getSquare(int n)
{
    return n * n;
}
int getSquareRoot(int n)
{
    return sqrt(n);
}
int main()
{
    int num, select;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter 1 for getting square of a number\nEnter 2 for getting squareRoot of a number\nEnter the number for operation: ";
    cin >> select;

    switch (select)
    {
    case 1:
        cout << getSquare(num);
        break;
    case 2:
        cout << getSquareRoot(num);
        break;
    default:
        cout << "Select either 1 or 2.";
        break;
    }
    return 0;
}