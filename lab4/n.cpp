#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    for(int i = 2; i * i <= n; ++i){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for(int i = 2; i <= n; ++i){
        if(is_prime(i)) cout << i << " is prime\n";
    }

    return 0;
}