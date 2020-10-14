#include <bits/stdc++.h>
using namespace std;

void f(int &n){
    n++;
}

void g(int a[]){
    a[0] = 1000;
}

int main() {
    int *q = NULL;
    cout << (0.1 + 0.2) << "\n";
    // cout << *q << "\n";
    int x = 2;
    int *n = &x; // & - address of
    *n += 1;
    // cout << *&*&x << "\n";
    // cout << *(n + 10) << " " << &n << " " << &x << "\n";
    int a[x];
    g(a);
    // cout << a[0] << "\n";
    // cout << a << " " << a + 1 << " " << a + 2 << " " << a + 100;
    // sort(a, a + x);
    // cin >> n;
    // f(n);
    // cout << n;
}