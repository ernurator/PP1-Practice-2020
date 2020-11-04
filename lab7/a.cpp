#include <iostream>

using namespace std;

int pow_2(int n){
    if(n == 0) return 1;
    return 2 * pow_2(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << pow_2(n);
    return 0;
}
