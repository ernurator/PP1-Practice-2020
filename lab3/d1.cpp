#include <iostream>

using namespace std;

int main(){
    int n, x, maxi = INT32_MIN, ind;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> x;
        if(x > maxi){
            maxi = x;
            ind = i;
        }
    }

    cout << ind + 1;
    return 0;
}