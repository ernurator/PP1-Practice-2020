#include <iostream>

using namespace std;

int sign(int n){
    return (n > 0 ? 1 : -1);
}

int f(int n){
    // return sign(n) * n;
    return (n > 0 ? n : -n);
}

int main() {
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}
