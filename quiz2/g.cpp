#include <iostream>
#include <algorithm>

using namespace std;

bool was[26];

int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); ++i){
        if(was[s[i] - 'a']) cout << s[i];
        was[s[i] - 'a'] = true; 
    }
}
