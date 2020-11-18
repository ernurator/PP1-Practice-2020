#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, bool> m;
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        m[a[i]] = true;
    }
    int cnt = 0;
    for(int i = 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            if(m[a[i] ^ a[j]] == true)
                ++cnt;
        }
    }
    cout << cnt;
}
