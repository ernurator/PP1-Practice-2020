#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int maxi;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(i == 0) maxi = a[i];
        else maxi = max(maxi, a[i]);
    }
    cout << maxi;
}