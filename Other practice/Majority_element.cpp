#include <iostream>
#include <vector>

using namespace std;
int majElement(vector<int>& nums) {
    int n = nums.size();
    for (int j = 0; j < n; j++) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == nums[j])
                count++;
        }
        if (count > n / 2)
            return nums[j];
    }
    return -1; // No majority element
}


int main(){

    vector<int> nums = {1,2,2,2,4};
    int result = majElement(nums);

    if (result != -1)
        cout << "Majority Element: " << result << endl;
    else
        cout << "No Majority Element" << endl;

return 0;

}