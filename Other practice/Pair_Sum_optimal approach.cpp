#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> pairSum(vector<int> &nums,int target){
    vector<int> ans;
    int j = nums.size() -1;
    int i =0;
    long long ps = 0;
    bool found = false;
    while(i < j){
        ps = nums[i] + nums[j];
        if(ps>target){
            j--;
        }else if(ps<target){
            i++;
        }else if(ps == target){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            break;
        }
    }
    return ans;
}


int main(){

    vector <int> nums = {};

    int n;
    cin>>n;

    for(int i = 0 ; i < n; i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    sort(nums.begin(),nums.end());

    int target = 26;
    vector <int> ans = pairSum(nums,target);

    if(ans.empty()){
        cout<<"No pair found!"<<endl;
    }else{
    cout<<ans[0]<<", "<<ans[1]<<endl;
        }

return 0;
}