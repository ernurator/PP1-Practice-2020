#include <iostream>

using namespace std;

int fib(int n){
    if(n == 0 || n == 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int f[(int)1e5];
void fib_opt(int n){
    if(n == 0 || n == 1) return;
    if(f[n - 1] == 0 && n - 1 != 0) fib_opt(n - 1);
    if(f[n - 2] == 0 && n - 2 != 0) fib_opt(n - 2);
    f[n] = f[n - 1] + f[n - 2];
}

int main() {
    int n;
    cin >> n;
    f[1] = 1;
    cout << fib(n) << endl;
    fib_opt(n);
    for(int i = 0; i <= n; ++i) cout << f[i] << " ";
    cout << f[n] << " " << f[n - 1];
    return 0;
}
