#include <iostream>
#include <algorithm>

using namespace std;

int cnt[1001];

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int maxi = 0;
    for(int i = 0; i < n; ++i){
        cnt[a[i]]++;
        maxi = max(maxi, cnt[a[i]]);
    }
    for(int i = 1000; i > 0; --i){
        if(cnt[i] == maxi) cout << i << " ";
    }

    return 0;
}
