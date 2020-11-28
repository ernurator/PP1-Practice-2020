#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.top() *= 2;
    cout << s.top() << "\n";
    s.pop();
    cout << s.top() << "\n";

    return 0;
}