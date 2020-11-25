#include <iostream>

using namespace std;

int f(char c, int n, int m){
    switch (c){
    case '+':
        return n + m;
    case '-':
        return n - m;
    case '*':
        return n * m;
    default:
        return 0;
        break;
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        char sign, var1, var2;
        int n, m;
        cin >> sign >> var1 >> n >> var2 >> m;
        printf("%c %c %c = %d\n", var1, sign, var2, f(sign, n, m));
    }
    return 0;
}
