#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6};
    int n = v.size();
    int target = 9;
    bool found = false;
    for(int i = 0; i<n;i++){
        int sum = 0;
        for(int j = i; j<n ;j++){
            sum += v[j];
            if(sum == target){
                found = true;
                for(int k = i; k<= j; k++){
                    cout<<v[k]<<" ";
                }
                cout<<endl;
                return 0;
            }
        }
    }
    if(found == false) cout<<"No subarray satisfies the condition.";
    
return 0;
}