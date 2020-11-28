#include <iostream>
#include <queue>

using namespace std;

int main(){
    deque<int> q;
    q.push_back(10);
    q.push_back(100);
    q.push_back(1000);
    q.push_front(1);
    q.pop_back();
    q.pop_front();
    cout << q.front() << " " << q.back() << "\n";
    
    return 0;
}