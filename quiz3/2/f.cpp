#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, bool> m;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        m[s] = true;
    }
    cin >> n;
    vector<string> v1, v2;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        if(!m[s])
            v2.push_back(s);
        m[s] = false;
    }
    for(map<string, bool>::iterator it = m.begin(); it != m.end(); ++it){
        if((*it).second)
            v1.push_back((*it).first);
    }
    
    cout << "Missed students:\n";
    for(int i = 0; i < v1.size(); ++i){
        cout << "- " << v1[i] << "\n";
    }
    cout << "Not in the group:\n";
    for(int i = 0; i < v2.size(); ++i){
        cout << "- " << v2[i] << "\n";
    }
    return 0;
}
