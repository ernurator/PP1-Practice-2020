#include <iostream>

using namespace std;

bool is_digit(char c){
    return (c >= '0' && c <= '9');
}

bool f(string s, int n){
    int cnt = 0;
    for(int i = 0; i < s.size(); ++i){
        if(is_digit(s[i])) {
            cnt++;
        } else {
            cnt = 0;
        }
        if(cnt >= n) return true;
    }
    return false;
}

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    if(f(s, n) == true){
        cout << "Valid";
    } else {
        cout << "Not valid";
    }
    return 0;
}
