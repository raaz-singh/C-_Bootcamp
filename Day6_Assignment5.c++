#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
bool pairSum(vector<int> vec, int size, int target)
{
    sort(vec.begin(), vec.end());
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        int sum = vec[i] + vec[j];
        if (sum == target)
            return true;
        else if (sum < target)
            i++;
        else
            j--;
    }
    return false;
}
int main()
{
    vector<int> vec = {2, 1, 3, 4};
    cout << pairSum(vec, 4, 4);
}