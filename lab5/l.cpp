#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    bool ok = true;
    for(int i = 1; i < s.size(); ++i){
        if(s[i] < s[i - 1]){
            ok = false;
            break;
        }
    }
    
    if(ok) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}