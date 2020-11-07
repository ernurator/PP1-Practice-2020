#include <iostream>

using namespace std;

int a[1000][1000];

void transpose(int n, int m){
    for(int j = 0; j < m; ++j){
        for(int i = 0; i < n; ++i){
            cout << a[i][j] << ' ';
        }
        cout << "\n";
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    transpose(n, m);
    return 0;
}
