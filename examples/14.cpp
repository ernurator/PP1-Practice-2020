#include <bits/stdc++.h>
using namespace std;
int n, ans;
// bool visited[100];
int cnt[10000];
int main() // time-limit exceeded
{
    //freopen("input.in", "r", stdin);
    //freopen("output.out", "w", stdout);
    cin >> n;
    int a[n], b[n];
    for(int j = 0; j < n; j++)
    {
        cin >> a[j];
    }
    for(int j = 0; j < n; j++)
    {
        cin >> b[j];
    }
    for(int i = 0; i < n; i++){
        int t = 0;
        for(int j = 0; j < n; j++){
            if(a[i] == b[j]){
                if(t++ == cnt[a[i]]){
                    ans++;
                    cnt[a[i]]++;
                    break;
                }
            }
        }
    }
    cout << ans;
}