#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    bool same = true;
    for(int i = 1; i < s.size(); ++i){
        if(s[i] != s[i - 1]){
            same = false;
            break;
        }
    }
    if(same) {
        cout << 0;
        return 0;
    }
    bool pal = true;
    for(int i = 0; i < s.size() / 2; ++i){
        if(s[i] != s[s.size() - 1 - i]){
            pal = false;
            break;
        }
    }
    if(pal) cout << s.size() - 1;
    else cout << s.size();
    return 0;
}
