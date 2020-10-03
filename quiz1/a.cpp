#include <iostream>

using namespace std;

int main(){
    int x, prev, cnt = 0;
    cin >> x;
    prev = x;
    while(x != 0){
        cin >> x;
        if(x > prev) ++cnt;
        prev = x;
    }
    cout << cnt;
    
    return 0;
}