#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x;
    int maximum, pos = 1;
    for(int i = 0; i < n; ++i){
        cin >> x;
        if(i == 0) maximum = x;
        else{
            if(x > maximum){
                maximum = x;
                pos = i + 1;
            }
        } 
    }

    cout << pos;
}