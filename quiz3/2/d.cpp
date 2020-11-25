#include <iostream>

using namespace std;

int f(int k, int m){
    if(m == 1 || m == 2) return m - 1;
    return (f(k, m - 2) + k*f(k, m - 1)) % 10;
}

int main(){
    int k, m;
    cin >> k >> m;
    cout << f(k, m);
    return 0;
}
