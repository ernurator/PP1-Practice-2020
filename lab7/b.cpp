#include <iostream>

using namespace std;

string to_binary(int n){
    if(n == 0) return "0";
    if(n == 1) return "1";
    return to_binary(n / 2) + char(n % 2 + '0');
}

int main() {
    int n;
    cin >> n;
    cout << to_binary(n);
    return 0;
}
