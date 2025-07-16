#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
vector<int> nums = {24,5,35,67,3};
int n = nums.size();
int j = 0;


for(int i = 0; i<n-1; i++){
int Min = nums[i];
int minIndex = i;

    for(int j = i+1;j<n;j++){
    Min = min(Min,nums[j]);
    
    if(Min == nums[j]){
        minIndex = j;
    }
    
}
        int temp = nums[i];
        nums[i] = nums[minIndex];
        nums[minIndex] = temp;
    
}
for(int num : nums){
    cout<<num<<" ";
}
    return 0;
}