#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, int> m;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        m[x]++;
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; ++i){
        int x;
        cin >> x;
        cout << m[x] << "\n";
    }
    return 0;
}
