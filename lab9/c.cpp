#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> m;
    int n; cin >> n;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        m[x]++;
    }
    map<int, int>::iterator it;
    int cnt = 0;
    for(it = m.begin(); it != m.end(); ++it){
        if((*it).second >= 2)
            ++cnt;
    }
    cout << cnt;
}

// m[i] = # of occurences of i in array
