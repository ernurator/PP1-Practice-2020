#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n;
    cin >> n;
    queue<string> q;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        if(x == 1){
            string s;
            cin >> s;
            q.push(s);
        } else {
            q.pop();
        }
        if(q.empty()) cout << "queue is empty" << "\n";
        else cout << q.front() << "\n";
    }
    return 0;
}
