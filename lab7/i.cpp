#include <iostream>

using namespace std;

long long f(){
    int n;
    cin >> n;
    if(n == 0) return 0;
    return (long long)n + f();
}

int main() {
    cout << f();
    return 0;
}
