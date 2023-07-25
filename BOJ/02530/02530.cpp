#include <iostream>

using namespace std;

int main() {
    int h, m, s, sum = 0, cook;
    cin >> h >> m >> s;
    sum += h * 3600 + m * 60 + s;
    cin >> cook;
    sum += cook;
    sum %= 24 * 3600;
    cout << sum / 3600 << ' ';
    sum %= 3600;
    cout << sum / 60 << ' ';
    sum %= 60;
    cout << sum << endl;
    return 0;
}