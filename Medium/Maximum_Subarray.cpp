#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum = 0;
        int maxSum = nums[0]; // 👈 no need for INT_MIN
        for (int i = 0; i < nums.size(); i++) {
            curSum += nums[i];
            maxSum = max(curSum, maxSum);
            if (curSum < 0) {
                curSum = 0;
            }
        }
        return maxSum;
    }
};

int main() {
    Solution sol;

    // Sample input
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int result = sol.maxSubArray(nums);
    cout << "Maximum subarray sum is: " << result << endl;

    return 0;
}
