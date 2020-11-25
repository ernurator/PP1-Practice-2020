#include <iostream>

using namespace std;

int f(int x){
    if(x == 1) return 1;
    int cnt = 1, mx = 1;
    for(int i = 2; i * i <= x; ++i){
        if(x % i == 0){
            cnt++;
            if(x / i != i) cnt++;
            mx = max(mx, max(i, x / i));
        }
    }
    return cnt + f(mx);
}

int main(){
    int x;
    cin >> x;
    cout << f(x);
    return 0;
}
