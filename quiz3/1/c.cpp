#include <iostream>
#include <algorithm>

using namespace std;

char a[10][10];

int f(int i, int j){
    if(a[i][j] == '*') return 0;
    a[i][j] = '*';
    return 1 + f(i + 1, j) + f(i - 1, j) + f(i, j + 1) + f(i, j - 1);
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    cout << f(y - 1, x - 1);
    return 0;
}
