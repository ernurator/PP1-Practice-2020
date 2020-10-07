#include <iostream>

using namespace std;

int main(){
    int n, maxi;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        if(x > maxi || i == 0) maxi = x;
    }
    cout << maxi;
    
    return 0;
}