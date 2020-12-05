#include <iostream>
#include <algorithm>

using namespace std;

char a[100][100];
int di[] = {1, -1, 0, 0};
int dj[] = {0, 0, 1, -1};
int n, m;

bool check(int i, int j){
    return i >= 0 && i < n && j >= 0 && j < m;
}

void f(int i, int j){
    a[i][j] = '.';
    for(int k = 0; k < 4; ++k){
        int x = i + di[k], y = j + dj[k];
        if(check(x, y) && a[x][y] != '.')
            f(x, y);
    }
}

int main(){
    
    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            if(a[i][j] == '#'){
                f(i, j);
                ++cnt;
            }
    cout << cnt;
    return 0;
}
