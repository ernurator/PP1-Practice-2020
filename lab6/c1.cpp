#include <iostream>

using namespace std;

int f(int n, int a[], int b[]){
    int ans = 0;
    int cnt[101]; // cnt[i] = # of occurences of i in array b
    for(int i = 0; i < 101; ++i) cnt[i] = 0;
    for(int i = 0; i < n; ++i){
        cnt[b[i]]++;
    } // 10000

    for(int i = 0; i < n; ++i){
        if(cnt[a[i]] > 0){
            ans++;
            cnt[a[i]]--;
        }
    } // 10000
    return ans;
}

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }
    
    cout << f(n, a, b);
    return 0;
}
