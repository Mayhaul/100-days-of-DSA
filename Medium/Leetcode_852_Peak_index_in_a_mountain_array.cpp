#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0, right = arr.size() - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] < arr[mid + 1])
                left = mid + 1;
            else
                right = mid;
        }
        return left; // or right, both are same here
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 4, 5, 7, 3, 2, 1};
    int peakIndex = sol.peakIndexInMountainArray(arr);
    cout << "Peak index in mountain array: " << peakIndex << endl;
    return 0;
}
