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
        int i = 0;
        int j = k;
        while(i < n && j < n){
            cout << a[i][j] << " ";
            ++i;
            ++j;
        }
        cout << "\n";
    }
    for(int k = 1; k < n; ++k){
        int i = k;
        int j = 0;
        while(i < n && j < n){
            cout << a[i][j] << " ";
            ++i;
            ++j;
        }
        cout << "\n";
    }

    return 0;
}