#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int size) {
int max = INT_MIN, s_max = INT_MIN;
for(int i = 0; i < size; i++){
if(arr[i] > max) max = arr[i];
}
for(int i = 0; i < size; i++){
if(arr[i] > s_max && arr[i] != max) { s_max = arr[i];
}
}
return s_max;}
int main(){
    int arr[5] ={10,25,9,8,22};
    cout<<"Second largest element is : "<<findSecondLargest(arr,5)<<endl;
    return 0;
}