#include <iostream>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    bool found = false;
    for(int i = 0; i < s.length(); ++i){
        if(s.substr(i, t.length()) == t){
            found = true;
            break;
        }
    }
    if(found) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}