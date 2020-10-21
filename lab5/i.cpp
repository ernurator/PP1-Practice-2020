#include <iostream>

using namespace std;

int cnt1[26]; // {0, 0, 0, 0, ...}
int cnt2[26];

int main(){
    string s, t;
    cin >> s >> t;
    for(int i = 0; i < s.length(); ++i){
        cnt1[s[i] - 'a']++;
    }
    for(int i = 0; i < t.length(); ++i){
        cnt2[t[i] - 'a']++;
    }

    bool ok = true;
    for(int i = 0; i < 26; ++i){
        if(cnt1[i] != cnt2[i]){
            ok = false;
            break;
        }
    }
    if(ok) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}

// cnt1[0] - 'a' - 1
// cnt1[1] - 'b' - 1
// ...
// cnt1[4] - 'e' - 1

// cnt2[0] - 'a' - 2
// cnt2[3] - 'd' - 1
// cnt2[5] - 'f' - 1