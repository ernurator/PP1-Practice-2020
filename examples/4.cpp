#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x, cnt_e = 0, cnt_o = 0;
    for(int i = 0; i < n; ++i){
        cin >> x;
        if(x % 2 == 0) cnt_e++;
        else cnt_o++;
    }
    cout << cnt_e << " " << cnt_o;
    return 0;
}