#include <iostream>
using namespace std;
int main(){
    int addition, subtraction; // a + b , a - b
    cin >> addition >> subtraction;
    if((addition + subtraction) / 2 < 0 || (addition - subtraction) / 2 < 0) cout << -1;
    else if((addition + subtraction) % 2 != 0 || (addition - subtraction) % 2 != 0) cout << -1;
    else cout << (addition + subtraction) / 2 << ' ' << (addition - subtraction) / 2;
    return 0;
}