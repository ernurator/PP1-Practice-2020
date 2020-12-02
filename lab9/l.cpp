#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    pair<int, int> p[n];
    for(int i = 0; i < n; ++i){
        int x, y;
        cin >> x >> y;
        p[i].first = x + y;
        p[i].second = i + 1;
    }

    sort(p, p + n);
    // sort(p.begin(), p.end());
    for(int i = 0; i < n; ++i){
        cout << p[i].second << " ";
    }
    return 0;
}
