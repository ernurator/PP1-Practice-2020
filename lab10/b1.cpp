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
    vector<unsigned long long> a(n + 1, 1);
    generate(a.begin(), a.end(), f);
    // for(vector<unsigned long long>::iterator it = a.begin(); it != a.end(); ++it){
    //     *(it) = f();
    // }
    for(int i = 0; i < n + 1; ++i){
        cout << a[i] << " ";
    }
    return 0;
}
