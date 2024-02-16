#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
int main() {
    fastio;
    cout << fixed;
    cout.precision(6);
    double x;
    cin >> x;
    cout << sqrt(x) * 4 << endl;
    return 0;
}