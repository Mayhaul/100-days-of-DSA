
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int maxArea = 0;
        while (i < j) {
            int h = min(height[i], height[j]);
            int base = j - i;
            maxArea = max(maxArea, h * base);

            // Move the smaller height inward
            if (height[i] < height[j])
                i++;
            else
                j--;
        }
        return maxArea;
    }
};

int main() {
    vector<int> height = {1, 2, 3, 1000, 9};
    Solution sol;
    int result = sol.maxArea(height);
    cout << "Maximum area: " << result << endl;
    return 0;
}
