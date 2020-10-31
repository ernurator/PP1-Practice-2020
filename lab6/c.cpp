#include <iostream>

using namespace std;

int f(int n, int a[], int b[]){
    int ans = 0;
    bool taken[n];
    for(int i = 0; i < n; ++i) taken[i] = false;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(a[i] == b[j] && taken[j] != true){
                ++ans;
                taken[j] = true;
                break;
            }
        }
    } // 10000 * 10000 = 10^10
    // 10^10 / 10^8 = 100
    return ans;
}

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    for(int i = 0; i < n; ++i)
        cin >> b[i];
    
    cout << f(n, a, b);
    return 0;
}
