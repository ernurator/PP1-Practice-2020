#include <iostream>
#include <algorithm>

using namespace std;

bool a[100][100];

int main(){
    string s;
    cin >> s;
    int n, m;
    cin >> n >> m;
    int x = 0, y = 0; // x - row number, y - column number
    a[0][0] = true;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == 'D') x++;
        if(s[i] == 'U') x--;
        if(s[i] == 'R') y++;
        if(s[i] == 'L') y--;
        a[x][y] = true;
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(a[i][j]) cout << '*';
            else cout << 'X';
        }
        cout << '\n';
    }
    return 0;
}
