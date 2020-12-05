#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        v.push_back(x);
    }
    rotate(v.begin(), v.begin() + 3, v.end()); // v[m] v[m + 1] ... v[e - 1] v[s] v[s + 1] ... v[m - 1]
    for(int i = 0; i < n; ++i)
        cout << v[i] << " ";
    return 0;
}
