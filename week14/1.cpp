#include <iostream>
#include <algorithm>

using namespace std;

bool comp(int x1, int x2){
    //  a[0] a[1] a[2]
    return x1 > x2;
}

bool f(int x1, int x2){
    // 2 4 10 12 9 7 3 1
    if(x1 % 2 == 1 && x2 % 2 == 0) return false;
    if(x1 % 2 == 0 && x2 % 2 == 1) return true;
    if(x1 % 2 == 0) return x1 < x2;
    return x1 > x2;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n, f);
    for(int i = 0; i < n; ++i) cout << a[i] << " ";
    return 0;
}
