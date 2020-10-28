#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int maxi = 0, mini = 100 + 1;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
    }
    cout << maxi - mini - 1 - (n - 2);

    return 0;
}