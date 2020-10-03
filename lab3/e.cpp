#include <iostream>
using namespace std;
int main(){
/*  You are given number N and N elements.
    Find sum of all elements of given array.
    Input:    5
              2 5 10 0 -1
    Output:   16  */
    int n;
    long long sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}