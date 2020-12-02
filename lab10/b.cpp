#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int x = 0;
unsigned long long f(){
    unsigned long long res = 1;
    for(int i = 0; i < x; ++i){
        res *= x;
    }
    x++;
    return res;
}

int main(){
    int n;
    cin >> n;
    unsigned long long a[n + 1];
    generate(a, a + n + 1, f);
    // for(int i = 0; i < n; ++i){
    //     a[i] = f();
    // }
    for(int i = 0; i < n + 1; ++i){
        cout << a[i] << " ";
    }
    return 0;
}
