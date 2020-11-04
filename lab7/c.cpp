#include <iostream>

using namespace std;

bool f(int n, int a[], int i, int x){
    if(i == n) return false;
    if(a[i] == x) return true;
    return f(n, a, i + 1, x);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int x; cin >> x;
    if(f(n, a, 0, x))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
