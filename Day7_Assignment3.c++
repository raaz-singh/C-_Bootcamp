#include <iostream>
using namespace std;
void wavePrint(int arr[][4], int r, int c)
{
    for (int col = 0; col < 4; col++)
    {
        if (col % 2 == 0)
        {
            for (int row = 0; row < 3; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            for (int row = r - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
}
int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    wavePrint(arr, 3, 4);
}