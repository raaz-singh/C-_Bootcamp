#include <iostream>
#include <climits>
using namespace std;
int findLargest(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[5] = {2, 5, 7, 3, 100};
    cout << "Largest element is: " << findLargest(arr, 5);
    return 0;
}