#include <iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    cin >> k;
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] != k)
            cout << a[i] << " ";
        else
            cnt += 1;
    }
    for(int i = 0; i < cnt; ++i)
        cout << 0 << " ";
    return 0;
}