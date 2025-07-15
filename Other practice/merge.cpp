
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector <int> &nums1,vector<int> &nums2){
    
    for(int i = 0; i < nums2.size(); i++){
        nums1.push_back(nums2[i]);
    }
    sort(nums1.begin(),nums1.end());
}
int main() {
vector <int> nums1 = {1,4,3,5,6,7};
vector <int> nums2 = {5,7,9,5,44,7,0,4};

merge(nums1,nums2);

for(int i = 0; i < nums1.size(); i++){
        cout<<nums1[i]<<" ";
        
    }
    cout<<endl;
    cout<<nums1[nums1.size()/2];

    return 0;
}