#include <iostream>

using namespace std;

int main(){
    int t, p, y, cnt = 0;
    cin >> t >> p >> y;
    t *= 100;
    y *= 100;
    while(t < y){
        t *= (1 + p / 100.0);
        ++cnt;
    }
    cout << cnt;
    
    return 0;
}