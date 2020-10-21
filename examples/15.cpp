#include <iostream>
#include <sstream>

using namespace std;

int main() {

    stringstream ss;

    // hello 2.3 4
    string k;
    k += "hello 2.3 4";
    ss << "hello"
       << " "
       << 2.3
       << " "
       << "4";

    string s, s2;
    float t, t2;
    int n, n2;
    
    ss >> s >> t >> n;
    ss >> s2 >> t2 >> n2;
    cout << ss.str() << endl;
    cout << s2 << endl;
    cout << t2 * 2 << endl;
    cout << n2 * 2 << endl;

    return 0;
}