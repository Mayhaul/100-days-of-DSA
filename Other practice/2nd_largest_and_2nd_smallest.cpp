#include <iostream>
using namespace std;

int main(){
int arr[6] = {7, 1, 4, 8, 3, 2};
int max1 = INT_MIN,max2=INT_MIN;
int min1 = INT_MAX, min2 = INT_MAX;

for(int num:arr){
    if(num>max1) max1 = num;
    if(num<min1) min1 = num;
}
for(int num: arr){
    if(num<max1 && num>max2) max2 = num;
    if(num>min1 && num<min2) min2 = num;
}

cout<<"2nd Max number: "<<max2<<endl<<"2nd Min number: "<<min2;
    return 0;
}