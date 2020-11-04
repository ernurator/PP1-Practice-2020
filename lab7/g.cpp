#include <iostream>

using namespace std;

int fac(int n){
    if(n == 0) return 1;
    else return n * fac(n - 1); // n == 3: 3 * f(2)
}

int main() {
    int n;
    cin >> n;
    cout << fac(n);
    return 0;
}
