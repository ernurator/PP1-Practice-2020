#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int b = 8;
    int ans = 0;
    for(int i = 0; i < 4; ++i){
        ans += (n % 2) * b;
        n /= 2;
        b /= 2;
    }

    cout << ans;
    return 0;
}