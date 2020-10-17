#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int odd = 0, even = 0;
    for(int i = 0; i < s.size(); ++i){
        if(i % 2 == 0) even += s[i] - '0';
        else odd += s[i] - '0';
    }
    if(even == odd) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}