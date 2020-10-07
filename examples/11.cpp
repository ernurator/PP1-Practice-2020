#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    a[0] = 10;
    a[0] = a[1];
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    
    return 0;
}