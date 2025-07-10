// LeetCode Problem: 136. Single Number
// Link: https://leetcode.com/problems/single-number/
// Approach: Bitwise XOR (a ^ a = 0, a ^ 0 = a)
// Time: O(n), Space: O(1)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;  // XOR cancels duplicates
        }
        return result;
    }
};

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};  // Example test case
    Solution obj;
    int unique = obj.singleNumber(nums);
    cout << "Single number is: " << unique << endl;
    return 0;
}
