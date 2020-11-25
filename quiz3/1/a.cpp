#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n){
    for(int i = 2; i * i <= n /*same as i <= sqrt(n)*/; ++i){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int cnt = 0, last_p = 0, last_i = 2;
    while(cnt < n){
        if(is_prime(last_i)) {
            last_p = last_i;
            cnt++;
        }
        last_i++;
    }
    cout << last_p;
    return 0;
}