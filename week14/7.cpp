#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

void print(int n){
    cout << n << " ";
}

int main(){
    int n;
    cin >> n;
    set<int> v;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        v.insert(x);
    }
    for_each(v.begin(), v.end(), print);
    // fill
    // *(it) = value;
    // generate
    // *(it) = func();
    return 0;
}
