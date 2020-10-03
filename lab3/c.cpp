#include <iostream>

using namespace std;

int main(){
    int n, x;
    int maxi = -10e9 - 1;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> x;
        if(x > maxi) maxi = x;
    }
    cout << maxi;
    return 0;
}