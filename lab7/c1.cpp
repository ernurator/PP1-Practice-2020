#include <iostream>

using namespace std;

bool f(int l, int r, int a[], int x){ // bin search
    if(l == r) return false;
    int m = (l + r) / 2;
    if(a[m] == x) return true;
    if(a[m] > x) return f(l, m, a, x);
    return f(m + 1, r, a, x);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int x; cin >> x;
    if(f(0, n, a, x))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
