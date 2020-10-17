#include <iostream>

using namespace std;

int main(){
    string s;
    int l, r;
    cin >> s >> l >> r;
    cout << s.substr(l, r - l + 1);
    // for(int i = l; i <= r; ++i){
    //     cout << s[i];
    // }
    return 0;
}