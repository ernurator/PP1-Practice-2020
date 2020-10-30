#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    int t[2*n - 1];
    t[0] = n - 1;
    for(int i = 0; i < 2*n - 2; ++i){
        t[i + 1] = n - 1 - i/2; 
    }
    // R D L U
    int dc[4] = {1, 0, -1, 0};
    int dr[4] = {0, 1, 0, -1};
    int r = 0, c = 0, cnt = 1;
    a[0][0] = cnt;
    cnt++;
    for(int i = 0; i < 2*n - 1; ++i){
        for(int j = 1; j <= t[i]; ++j){
            r += dr[i%4];
            c += dc[i%4];
            a[r][c] = cnt;
            cnt++;
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
