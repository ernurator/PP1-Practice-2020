#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    long long n;
    long long l, r;
    cin >> n >> l >> r;
    long long a[n];
    long long i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    for (i = 0; i < l - 1; i++)
    {
        cout << a[i] << " ";
    }
    for (i = r - 1; i >= l - 1; i--)
    {
        cout << a[i] << " ";
    }

    for (i = r; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}