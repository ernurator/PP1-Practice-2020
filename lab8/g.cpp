#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int n){
    if(n == 1) return false;
    for(int i = 2; i * i <= n; ++i) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int k;
    cin >> k;
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(is_prime(v[i]) && v[i] >= k)
            cnt++;
    }
    cout << cnt;
    return 0;
}
// greater - >
// not less - >=
// less - <
// not greater - <=
