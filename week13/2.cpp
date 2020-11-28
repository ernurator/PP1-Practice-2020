#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(100);
    q.push(1000);
    q.front() += 100;
    // cout << q.front() << " " << q.back() << "\n";
    // q.pop();
    // cout << q.front() << "\n";
    while(q.size() != 0){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}