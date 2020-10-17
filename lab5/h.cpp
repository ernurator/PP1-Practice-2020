#include <iostream>

using namespace std;

int a[10];

int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); ++i){
        a[s[i] - '0']++;
    }// '3' - '0' = 3
    int first = 0;
    bool ok = true;
    for(int i = 0; i < 10; ++i){
        if(first == 0 && a[i] != 0) first = a[i];
        else if(first != 0 && a[i] != first && a[i] != 0){
            ok = false;
            break;
        }
    }
    if(ok) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}