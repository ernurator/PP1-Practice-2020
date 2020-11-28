#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main(){
    stack<char> s;
    string t;
    cin >> t;
    for(int i = 0; i < t.size(); ++i){
        char c = t[i];
        if(c == '1' && !s.empty() && s.top() == '1') {
            s.pop();
        } else {
            s.push(c);
        }
    }
    string ans = "";
    while(!s.empty()){
        ans += s.top();
        s.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}