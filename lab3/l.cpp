#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int n, m; // array size
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i]; // array 1 reading
    }

    cin >> m;
    int b[m];
    for(int i = 0; i < m; ++i){
        cin >> b[i]; // array 2 reading
    }

    int ind_a = 0, ind_b = 0;
    while(ind_a != n && ind_b != m){
        if(a[ind_a] <= b[ind_b]){
            cout << a[ind_a] << " ";
            ind_a++;
        } else {
            cout << b[ind_b] << " ";
            ind_b++;
        }
    }
    
    while(ind_a != n || ind_b != m){
        if(ind_a == n){
            cout << b[ind_b] << " ";
            ind_b++;
        } else {
            cout << a[ind_a] << " ";
            ind_a++;
        }
    }
    return 0;
}
