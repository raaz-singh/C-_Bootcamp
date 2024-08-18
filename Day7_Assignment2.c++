#include <iostream>
#include<climits>
using namespace std;
bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
                return true;
        }
    }
    return false;
}

// calculation sum of entire array
void printSum(int arr[][4], int row, int col)
{
    int sum = 0;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
    }
    cout << sum;
}

// largest sum is present in which row
void largestSum(int arr[][4], int row, int col)
{
    int maximum = INT_MIN;
    int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maximum)
            maximum = sum;
        rowIndex = row;
    }
    cout << "Maximum sum is : " << maximum<<endl;
    cout <<"row number : "<< row;
}
int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    if (isPresent(arr, 17, 3, 4))
    {
        cout << "Element is present" << endl;
    }
    else
    {
        cout << "Element is not present" << endl;
    }
    printSum(arr, 3, 4);
    cout<<endl;
    largestSum(arr,3,4);
    return 0;
}