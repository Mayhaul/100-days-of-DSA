#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
int arr[5] = {4,5,8,9,6};
int len = sizeof(arr)/sizeof(arr[0]);
int temp = 0;

for(int i = 0;i<len/2;i++){
    int j = (i+1);
    temp = arr[i];
    arr[i] = arr[len -j];
    arr[len -j] = temp;
}

for(int i = 0;i<len;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}
