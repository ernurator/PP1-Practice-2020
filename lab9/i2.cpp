#include <iostream>
#include <set>
using namespace std;

int main() {
    set<string> s;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string name;
        cin >> name;
        if(s.count(name) == 0){
            s.insert(name);
            cout << "new user added\n";
        } else {
            cout << "user already exists\n";
        }
    }
    return 0;
}
