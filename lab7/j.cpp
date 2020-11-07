#include <iostream>

using namespace std;

int f(int n){
    if(n == 0) return 0;
    int l = n % 10;
    return l/2 + f(n/10);
}

int main() {
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}
