#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    char ans = 'a';
    for(int i = 0; i < s.size(); ++i){
        if(s[i] > ans) ans = s[i];
    }
    cout << ans;
    return 0;
}