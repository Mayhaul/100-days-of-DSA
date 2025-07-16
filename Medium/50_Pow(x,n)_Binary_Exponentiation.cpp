#include <iostream>
#include <iomanip>  // for setprecision
using namespace std;

double fastPow(double x, int n) {
    double ans = 1;
    while(n > 0) {
        if(n % 2 == 1) {
            ans *= x;
        }
        x *= x;
        n /= 2;
    }
    return ans;
}

int main() {
    cout << fixed << setprecision(0);
    cout << fastPow(3, 20) << endl;
    return 0;
}
