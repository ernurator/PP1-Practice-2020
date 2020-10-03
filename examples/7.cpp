#include <iostream>

using namespace std;


int main(){
    int n, cnt = 0;
    
    cin >> n;
    int c[] = {1, 2, 10, 92};
    int b[n];
    int a[10];
    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }
    for(int i = 0; i < n - 1; ++i){
        if(b[i] < b[i + 1]) cnt++;
    }
    cout << cnt;
    return 0;
}
