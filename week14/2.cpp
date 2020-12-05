#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(string x1, string x2){
    if(x1.length() != x2.length()) return x1.length() < x2.length();
    return x1 < x2;
}

int main(){
    int n;
    cin >> n;
    vector<string> a;
    for(int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        a.push_back(s);
    }
    sort(a.begin(), a.end(), comp);
    for(int i = 0; i < n; ++i) cout << a[i] << " ";
    return 0;
}
