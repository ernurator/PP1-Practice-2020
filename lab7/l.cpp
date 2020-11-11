#include <iostream>
#include <cmath>
using namespace std;

bool f(string s, int i, int e)
{
    if(i >= e) return true;
    if (s[i] != s[e])
    {
        return false;
    }
    return f(s, ++i, --e);
}

int main()
{
    string s;
    cin >> s;
    // f(s, 0, s.size() - 1) ? cout << "Yes" : cout << "No";
    // condition ? true_action : false_action;
    // cout << (n % 2 == 0 ? "Yes" : "No");
    if(f(s, 0, s.size() - 1)) cout << "Yes";
    else cout << "No";
}