#include <iostream>

using namespace std;

void f(string s, char c[][8]){
    int i = s[0] - 'A', j = s[1] - '1';
    c[i][j] = '*';
}

int main(){
    char c[8][8];
    for(int i = 0; i < 8; ++i)
        for(int j = 0; j < 8; ++j)
            c[i][j] = '0';
    
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        f(s, c);
    }

    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j)
            cout << c[i][j];
        cout << "\n";
    }
    return 0;
}
