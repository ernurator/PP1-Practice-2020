#include <iostream>

using namespace std;

bool f(long long n){
    if(n == 1) return true;
    if(n % 2 == 1) return false;
    return f(n/2);
}

int main() {
    long long n;
    cin >> n;
    if(f(n))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
