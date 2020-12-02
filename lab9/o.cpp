#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, string> m;
    for(int i = 0; i < n; ++i){
        string s, t;
        cin >> s >> t;
        m[s] = t;
    }
    cin >> n;
    for(int i = 0; i < n; ++i){
        string s, t;
        cin >> s >> t;
        if(m[s] == ""){
            cout << "login error\n";
        } else if(m[s] != t) {
            cout << "password error\n";
        } else {
            cout << "correct password\n";
        }
    }
    return 0;
}
