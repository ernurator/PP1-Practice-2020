#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n]; // создание массива
    for(int i = 0; i < n; ++i){
        cin >> a[i]; // заполнение массива
    }
    for(int i = 0; i < n; ++i){
        if(a[i] % 2 == 1) cout << a[i] << " "; // если элемент массива нечетный, выводим его
    }
    return 0;
}