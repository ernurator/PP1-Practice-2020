#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int i = 0;
int f(){
    return 2*(++i);
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    // for(int i = 0; i < n; ++i){
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    generate(v.begin(), v.end(), f);
    // for ... v[i] = f();
    for(int i = 0; i < n; ++i){
        cout << v[i] << " ";
    }
    return 0;
}
