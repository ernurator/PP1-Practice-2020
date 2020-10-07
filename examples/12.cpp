#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int s = max(n, k);
    swap(n, k);
    int a[] = {1, 2};
    swap(a[0], a[1]);
    cout << a[0] << " " << a[1] << endl;
    cout << n << " " << k << endl;
    // cout << s;
    
    return 0;
}