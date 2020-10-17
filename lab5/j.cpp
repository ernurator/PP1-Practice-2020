#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    bool pal = false;
    string t = s;
    reverse(s.begin(), s.end());
    if(t == s) pal = true;
    else if(t.substr(1) == s.substr(0, s.size() - 1))
            pal = true;

    if(pal) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}