#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    // cout << s.size() << endl;
    for(int i = 0; i < s.size(); ++i){
        if('a' <= s[i] && s[i] <= 'z') cout << char(s[i] + 'A' - 'a');
        else cout << s[i];
    }
    return 0;
}