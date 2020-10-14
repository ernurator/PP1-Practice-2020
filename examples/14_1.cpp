#include <bits/stdc++.h>
using namespace std;
int n, ans;
bool visited[10000];
int cnt[10000];
int main()
{
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
        cnt[a[i]]++;
        visited[a[i]] = 1;
    }
    for(int i = 0; i < n; ++i){
        if(visited[b[i]] && cnt[b[i]] > 0){
            cnt[b[i]]--;
            ans++;
        }
    }
    cout << ans;
}