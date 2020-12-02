#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(string x1, string x2){
    return x1.length() < x2.length();
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
