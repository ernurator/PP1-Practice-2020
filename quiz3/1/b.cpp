#include <bits/stdc++.h>

using namespace std;

int main(){
    map<string, int> m;
    int n;
    cin >> n;
    bool ok = true;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        m[s]++;
        if(m[s] == 2) {
            ok = false;
            cout << s << "\n";
        }
    }
    if(ok) cout << "Understandable, have a great day";

    return 0;
}