#include <iostream>
#include <vector>
using namespace std;

int main(){
int x = 69;

int *ptr = &x;
int **ptr2 = &ptr;
cout<<ptr<<endl<<*ptr<<endl<<ptr2<<endl<<*ptr2;

    return 0;
}