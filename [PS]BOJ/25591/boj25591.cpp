#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
int main() {
    fastio;
    int num1, num2;
    cin >> num1 >> num2;
    int a = 100 - num1;
    int b = 100 - num2;
    int c = 100 - (a + b);
    int d = a * b;

    int q = d / 100;
    int r = d % 100;

    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << q << ' ' << r << endl;
    cout << c + q << ' ' << r << endl;

    return 0;
}