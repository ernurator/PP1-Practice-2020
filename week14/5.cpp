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
    vector<int>::iterator it = unique(v.begin(), v.end()); // 10 10 10 30 40 10 10 20 20
                                // 10       30 40 10    20
                                // 10 30 40 10 20 ?? ?? ?? ??
    // 1 way
    vector<int>::iterator i;
    for(i = v.begin(); i != it; ++i){
        cout << *(i) << " ";
    }
    cout << endl;
    
    // 2 way
    v.resize(it - v.begin());
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    
    return 0;
}
