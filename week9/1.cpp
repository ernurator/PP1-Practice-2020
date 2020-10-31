#include <iostream>

using namespace std;

bool f(string name, char c, int x){
    // return true if s contains c not less than x times
    // return false if s contains c less than x times
    int cnt = 0;
    for(int i = 0; i < name.size(); ++i){
        if(name[i] == c) cnt++;
    }
    return cnt >= x;
}

void hello(){
    string name;
    cin >> name;
    cout << "Hello, " << name << endl;
}

int main() {
    int n = 5;
    hello();
    if(f("aaaaaaaaaa", 'a', n)) cout << "YES";
    else cout << "NO";
    return 0;
    cout << "asd";
}
