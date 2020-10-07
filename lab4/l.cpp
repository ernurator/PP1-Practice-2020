#include <bits/stdc++.h>
using namespace std;
int cnt, mx, n, m, mn, x, y, ans, ansi, sum;
int main()
{
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "coordinates of min elements:\n";
    for (int j = 0; j < m; j++)
    {
        mn = INT32_MAX;
        for (int i = 0; i < n; i++)
        {
            if (mn > a[i][j])
            {
                mn = a[i][j];
                x = i + 1;
                y = j + 1;
            }
        }
        cout << x << ";" << y << "\n";
        sum += mn;
    }
    cout << "\nTheir sum:\n";
    cout << sum;
}