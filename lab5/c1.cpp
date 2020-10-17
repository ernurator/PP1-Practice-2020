#include <iostream>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    bool found = false;
    for(int i = 0; i < s.length(); ++i){
        if(s[i] == t[0]){
            bool ok = true;
            for(int j = 1; j < t.length(); ++j){
                if(s[i + j] != t[j]){
                    ok = false;
                    break;
                }
            }
            if(ok){
                found = true;
                break;
            }
        }
    }
    if(found) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}