#include <iostream>
#define PI 3.141592
using namespace std;
int main(){
    cout << fixed;
    cout.precision(6);
    double d1, d2;
    cin >> d1 >> d2;
    cout << 2 * d1 + 2 * PI * d2 << endl;
    return 0;
}