#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x = 1;
    while(x < n){
        cout << x << " ";
        x *= 2;
    }
    return 0;
}