#include <iostream>
#include <algorithm>

using namespace std;

bool similar(char c, char d){
    c = tolower(c);
    d = tolower(d);
    if(c == 'b') c = 'p';
    else if(c == 'e') c = 'i';

    if(d == 'b') d = 'p';
    else if(d == 'e') d = 'i';
    return c == d;
}

bool same(string s, string t){
    if(s.size() != t.size()) return false;
    for(int i = 0; i < s.size(); ++i){
        if(!similar(s[i], t[i])) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string s, t;
        cin >> s >> t;
        if(same(s, t)) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
