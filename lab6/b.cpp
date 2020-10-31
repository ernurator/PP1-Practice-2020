#include <iostream>

using namespace std;

int d[10000];

void f(int n, int a[], int b[]){
    // for(int i = 0; i < n; ++i){
    //     cout << abs(a[i] - b[i]) << " ";
    // }
    for(int i = 0; i < n; ++i){
        d[i] = abs(a[i] - b[i]);
    }
}

int g(int ind, int a[], int b[]){
    return abs(a[ind] - b[ind]);
}

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    for(int i = 0; i < n; ++i)
        cin >> b[i];
    // f(n, a, b);
    // for(int i = 0; i < n; ++i)
    //     cout << d[i] << " ";
    for(int i = 0; i < n; ++i)
        cout << g(i, a, b) << " ";
    return 0;
}
