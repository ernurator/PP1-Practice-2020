#include <iostream>
#include <set>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<char, int> m;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        set<char> x;
        for(int j = 0; j < s.size(); ++j) x.insert(s[j]);
        set<char>::iterator it;
        for(it = x.begin(); it != x.end(); ++it) m[*(it)]++;
    }
    bool ok = 0;
    for(char i = 'a'; i <= 'z'; ++i){
        if(m[i] == n) {
            cout << i << " ";
            ok = 1;
        }
    }
    if(!ok) cout << "NO COMMON CHARACTERS";
    return 0;
}
