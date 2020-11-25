#include <iostream>
#include <set>

using namespace std;

void f(int n, int i){
    if(n == 1)
        return;
    while(n % i == 0){
        cout << i << " ";
        n /= i;
    }
    f(n, i + 1);
}

int main(){
    int n;
    cin >> n;
    f(n, 2);
    return 0;
}
