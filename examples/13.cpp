#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i){ // row number
        for(int j = 0; j < m; ++j){ // column number
            cin >> a[i][j];
        }
    }
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            printf("%-3d ", a[i][j]);
            // cout.width(2);
            // cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}