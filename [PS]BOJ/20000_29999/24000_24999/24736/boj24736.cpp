#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    int T, F, S, P, C;
    int sz = 2;
    while(sz--){
        cin >> T >> F >> S >> P >> C;
        cout << T * 6 + F * 3 + S * 2 + P * 1 + C * 2 << ' ';
    }

    return 0;
}