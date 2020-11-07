#include <iostream>

using namespace std;

char f(int n){
    if(n <= 9)
        return n + '0';
    return n - 10 + 'A';
}

void to_k_nary(int n, int k){
    if(n < k){
        cout << f(n);
        return;
    }
    to_k_nary(n/k, k);
    cout << f(n % k);
}

int main() {
    int n, k;
    cin >> n >> k;
    to_k_nary(n, k);
    return 0;
}
