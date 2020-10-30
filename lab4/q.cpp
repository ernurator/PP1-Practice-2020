#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        for(int k = 0; k < n - i; ++k){
            cout <<'.';
        }

        for(int k = 0; k < 2*i - 1; ++k){
            cout << '*';
        }
        
        for(int k = 0; k < n - i; ++k){
            cout <<'.';
        }
        
        cout << endl;
    }
    return 0;
}
