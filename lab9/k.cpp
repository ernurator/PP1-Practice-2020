#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main(){
    stack<pair<int, int> > s; // height, index
    int n;
    cin >> n;
    int a[n], l[n], r[n];
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    
    // left bound
    l[0] = 0;
    s.push(make_pair(a[0], 0));
    for(int i = 1; i < n; ++i){
        int ans = i;
        while(!s.empty() && s.top().first >= a[i]){
            ans = s.top().second;
            s.pop();
        }
        s.push(make_pair(a[i], ans));
        l[i] = ans;
    }

    // right bound
    while (!s.empty())
        s.pop();
    r[n - 1] = n - 1;
    s.push(make_pair(a[n - 1], n - 1));
    for(int i = n - 2; i >= 0; --i){
        int ans = i;
        while(!s.empty() && s.top().first >= a[i]){
            ans = s.top().second;
            s.pop();
        }
        s.push(make_pair(a[i], ans));
        r[i] = ans;
    }
    
    int ans = 0;
    for(int i = 0; i < n; ++i)
        ans = max(ans, a[i] * (r[i] - l[i] + 1));

    cout << ans << endl;
    return 0;
}
