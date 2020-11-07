#include <iostream>

using namespace std;

int f(int n){
    if(n == 0) return 1;
    else return n*f(n - 1);
}

int fac(int n){
    int res = 1;
    for(int i = 2; i <= n; ++i){
        res *= i;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << " " << fac(n);
    return 0;
}
