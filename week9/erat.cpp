#include <bits/stdc++.h>
using namespace std;

void print_primes(int n){
    bool is_p[n + 1];
    for(int i = 2; i <= n; ++i){
        is_p[i] = true;
    }
    for(int i = 2; i * i <= n; ++i){
        if(is_p[i] == true){
            for(int k = i*i; k <= n; k += i){
                is_p[k] = false;
            }
        }
    } // вычеркиваем непростые

    for(int i = 2; i <= n; ++i){
        if(is_p[i] == true){
            cout << i << " is prime\n";
        }
    } // выведем простые (незачеркнутые)
}

int main() {
    int n;
    cin >> n;
    print_primes(n);

    return 0;
}