#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int ind = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] <= k)
            ind = i + 1;
    }
    cout << ind;
    return 0;
}