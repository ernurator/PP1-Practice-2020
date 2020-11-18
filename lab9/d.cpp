#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> m;
    int n, k; cin >> n >> k;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        m[x]++;
    }
    cout << m[k];
}

// m[i] = # of occurences of i in array
