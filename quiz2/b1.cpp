#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }
    
    for(int k = n - 1; k >= 0; --k){
        int r = 0, c = k;
        while(c < n){
            cout << a[r][c] << " ";
            r++;
            c++;
        }
        cout << endl;
    }

    for(int k = 1; k < n; ++k){
        int r = k, c = 0;
        while(r < n){
            cout << a[r][c] << " ";
            r++;
            c++;
        }
        cout << endl;
    }

    return 0;
}
