#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, bool> m;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        if(m[s] == false) {
            m[s] = true;
            cout << "new user added\n";
        } else {
            cout << "user already exists\n";
        }
    }
    return 0;
}
