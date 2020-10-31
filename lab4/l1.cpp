#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    int sum = 0;
    cout << "coordinates of min elements:" << endl;
    for(int j = 0; j < m; ++j){
        int mini = INT32_MAX, min_ind = 0;
        for(int i = 0; i < n; ++i){
            if(mini > a[i][j]){
                mini = a[i][j];
                min_ind = i + 1;
            }
        }
        sum += mini;
        cout << min_ind << ';' << j + 1 << endl;
    }
    cout << "\nTheir sum:\n" << sum;
    return 0;
}