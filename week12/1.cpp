#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;
    // pair<string, int> p;
    int n; cin >> n;
    for(int i = 0; i < n; ++i){
        string name; int points;
        cin >> name >> points;
        m[name] += points;
    }
    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " - " << (*it).second << endl;
    }
}

// 4
// Abc 10
// Sdf 1
// Abc 1
// Dhj -10

// m["Abc"] = 11
// m["Dhj"] = -10
// m["Sdf"] = 1

// Abc - 11
// Dhj - -10
// Sdf - 1
