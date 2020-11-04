#include <bits/stdc++.h>
// <iomanip>
using namespace std;

double f(int a, int b){
    return sqrt(a*a + b*b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << setprecision(4) << f(a, b);
    return 0;
}