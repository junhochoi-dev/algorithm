#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double c, a, b;
    cin >> c >> a >> b;
    cout << (int)(c / sqrt(a * a + b * b) * a) << ' ' << (int)(c / sqrt(a * a + b * b) * b) << endl;
    return 0;
}