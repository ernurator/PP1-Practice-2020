#include <iostream>
#include <algorithm>

using namespace std;

bool a[100][100];

int main(){
    string s;
    cin >> s;
    int x = 0, y = 0; // x - horizontal coord, y - vertical
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == 'B') y--; 
        if(s[i] == 'F') y++;
        if(s[i] == 'R') x++;
        if(s[i] == 'L') x--;
    }
    // B F L R
    if(x == 0 && y == 0)
        cout << "Chill Yelnur";

    for(int i = 0; i < abs(y); ++i){
        if(y < 0) cout << 'F';
        else cout << 'B';
    }
    for(int i = 0; i < abs(x); ++i){
        if(x < 0) cout << 'R';
        else cout << 'L';
    }
    return 0;
}
