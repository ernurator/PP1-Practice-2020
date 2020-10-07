#include <iostream>

using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        while(x != 0){
            int r = x % 10;
            if(r == 0) ++cnt;
            x /= 10;
        }
    }
    cout << cnt;
    
    return 0;
}