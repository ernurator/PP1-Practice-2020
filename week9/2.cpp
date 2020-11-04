#include <bits/stdc++.h>
using namespace std;


int main()
{
    // printf("%d, %.3f\n", 1, 12.12);
    // printf("%X %c %s", 256, 97, "sad");
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
        printf("%+d\n", a[i]);
    }
    return 0;
}