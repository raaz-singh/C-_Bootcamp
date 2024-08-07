#include <bits/stdc++.h>
using namespace std;

int sumOfThree(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int num1, num2, num3;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    int sum = sumOfThree(num1, num2, num3);

    cout << "The sum of the three numbers is: " << sum << endl;

    return 0;
}
