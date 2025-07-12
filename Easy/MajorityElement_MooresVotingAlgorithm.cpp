#include <iostream>
#include <vector>
using namespace std;

int majElement(vector<int>& nums) {
    int count = 0;
    int candidate = 0;

    // Step 1: Find a potential candidate
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    // Step 2: Confirm the candidate is actually majority
    count = 0;
    for (int num : nums) {
        if (num == candidate)
            count++;
    }

    if (count > nums.size() / 2)
        return candidate;
    else
        return -1;
}

int main() {
    vector<int> nums = {1, 2, 2, 2, 4};
    int result = majElement(nums);

    if (result != -1)
        cout << "Majority Element: " << result << endl;
    else
        cout << "No Majority Element" << endl;

    return 0;
}
