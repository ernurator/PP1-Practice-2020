#include <iostream>

using namespace std;

int own_min(int a, int b){
    if(a > b) return a;
    return b;
}

int f(int n, int a[], int b[]){
    int cnt_a[101]; // cnt_a[i] = # of occurences of i in array a
    int cnt_b[101]; // cnt_b[i] = # of occurences of i in array b
    for(int i = 0; i < 101; ++i){
        cnt_a[i] = 0;
        cnt_b[i] = 0;
    }
    for(int i = 0; i < n; ++i){
        cnt_a[a[i]]++;
        cnt_b[b[i]]++;
    }

    int ans = 0;
    for(int i = 1; i <= 100; ++i){
        ans += own_min(cnt_a[i], cnt_b[i]);
    }
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
