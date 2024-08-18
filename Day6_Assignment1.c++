#include <iostream>
using namespace std;

int main()
{

    int arr1[5] = {5, 8, 9, 10, 2};
    for (int i : arr1)
    {
        cout << i << " ";
    }

    int arr[7];
    int sum = 0;
    cout << "\nEnter 7 numbers " << endl;
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    cout << "numbers are : " << endl;

    for (int i = 0; i < 7; i++)
    {
        sum += arr[i];
        cout << arr[i] << " " << endl;
    }
    cout << sum;

    return 0;
}