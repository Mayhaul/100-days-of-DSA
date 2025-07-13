#include <iostream>
#include <vector>
using namespace std;

int majElement(vector<int>& nums) {
int freq = 0;
int ans = 0;
int n = nums.size();

for(int i = 0; i<n; i++){
    if(freq == 0){
        ans = nums[i];
        }
    if(nums[i] == ans){
        freq++;
        }
    else{
        freq--;
        }
    }
    int actualCount = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == ans) {
            actualCount++;
        }
    }

    if (actualCount > n / 2) {
        return ans;
    } else {
        return -1; // No majority element
    }
}

int main() {
    vector<int> nums = {1, 2, 2, 2, 4};
    int ans = majElement(nums);

    if (ans != -1)
        cout << "Majority Element: " << ans << endl;
    else
        cout << "No Majority Element" << endl;

    return 0;
}

