#include <iostream>
using namespace std;

int missingNumber(int arr[], int n)
{
    int n_sum = (n * (n + 1)) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return n_sum - sum;
}

int main()
{
    int arr[5] = {1, 2, 4, 5};
    cout << missingNumber(arr, 5);
    return 0;
}