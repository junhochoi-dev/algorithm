#include <iostream>
using namespace std;
int main() {
    double a, b;
    cin >> a >> b;
    a =  a * (100 - b) / 100;
    if(a >= 100) cout << 0 << endl;
    else cout << 1 << endl;
    return 0;
}