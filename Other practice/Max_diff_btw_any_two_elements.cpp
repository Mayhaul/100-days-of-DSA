#include <iostream>
using namespace std;

int main(){
int arr[] = {1, 9, 3, 15, 2};
int maxDiff = INT_MIN;
int minDiff = INT_MAX;
int j = 0;
for(int i = 0;i<5;i++){
    if (i == j) continue;  // skip same element
            int diff = abs(arr[i] - arr[j]);
            maxDiff = max(maxDiff, diff);
            minDiff = min(minDiff, diff);
    if(i==4&&j!=4){
        i= -1;
        j++;
    }
}
cout<<"Max Diff: "<<maxDiff<<" "<<"Min Diff: "<<minDiff;
    return 0;
}