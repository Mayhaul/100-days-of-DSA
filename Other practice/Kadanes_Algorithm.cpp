// Maximum Subarray Sum
// A subarray is a contiguous part of an array.
// This means all the elements of a subarray are 
// next to each other in the original array and maintain the same order.

#include <iostream>
#include <vector>
using namespace std;

/*
//Print wanted subarray
int main(){

int a,b;
cin>>a>>b;
for(int i = a;i<b;i++){
cout<<v[i]<<" ";
}
    return 0;
}
*/

/*
int main() {
    vector<int> v = {1, 2, 3, -2, 5};
    int maxSum = INT_MIN;
    int start = 0, end = 0;

    for (int i = 0; i < v.size(); i++) {
        int sum = 0;  // Reset for each new subarray
        for (int j = i; j < v.size(); j++) {
            sum += v[j];

            if (sum > maxSum) {
                maxSum = sum;
                start = i;
                end = j;
            }
        }
    }

    // ✅ Output the result
    cout << "Maximum sum: " << maxSum << endl;
    cout << "Subarray with maximum sum: ";
    for (int i = start; i <= end; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
    */

    // Kadane's Algorithm
    

