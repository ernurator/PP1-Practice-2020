#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    // sort(a, a + n);
    for(int i = 0; i < n - 1; ++i){
        for(int j = 0; j < n - i - 1; ++j){
            if(a[j] > a[j+1]){
                // swap(a[j], a[j + 1]);
                int x = a[j];
                a[j] = a[j + 1];
                a[j + 1] = x;
            }
        }
    }

    for(int i = n - 1; i >= 0; --i){
        cout << a[i] << " ";
    }
    return 0;
}