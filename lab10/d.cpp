#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sum(vector<int> v){
    int summ = 0;
    for(int i = 0; i < v.size(); ++i){
        summ += v[i];
    }
    return summ;
}

bool compare(vector<int> v1, vector<int> v2){
    for(int i = 0; i < v1.size(); ++i){
        if(v1[i] != v2[i]) return v1[i] < v2[i];
    }
    return true;
}

bool comp(vector<int> v1, vector<int> v2){
    if(sum(v1) == sum(v2)){
        if(v1.size() == v2.size()){
            return compare(v1, v2);
        }
        return v1.size() < v2.size();
    }
    return sum(v1) < sum(v2);
}

int main(){
    int n;
    cin >> n;
    vector<vector<int> > v;
    for(int i = 0; i < n; ++i){
        int m;
        cin >> m;
        vector<int> a;
        for(int j = 0; j < m; ++j){
            int x;
            cin >> x;
            a.push_back(x);
        }
        v.push_back(a);
    }
    sort(v.begin(), v.end(), comp);
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < v[i].size(); ++j){
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
