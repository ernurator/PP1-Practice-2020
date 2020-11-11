#include <iostream>
#include <cmath>
using namespace std;

void f(int n){
    int x;
    cin >> x;
    if(n != 1) f(n - 1);
    cout << x << " ";
}

int main() {
    int n;
    cin >> n;
    f(n);
}