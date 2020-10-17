#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    char x[5];
    // stoi - string to integer
    getline(cin, s);
    int n = stoi(s);
    cout << n + 1;

    return 0;
}