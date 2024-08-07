#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    int *p1, *p2, *p3;

    p1 = &a;
    p2 = &b;
    p3 = &c;

    *p1 = 10;
    *p2 = 20;
    *p3 = 30;

    int sum = *p1 + *p2 + *p3;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "sum: " << sum << endl;

    return 0;
}
