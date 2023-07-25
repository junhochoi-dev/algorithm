#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <map>
#include <set>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'
int main() {
    fastio
    cout << fixed;
    cout.precision(6);
    double hammer[10], sum = 1;
    loop(n, 10) cin >> hammer[n];
    sort(hammer, hammer + 10, greater<>());
    loop(n, 9) sum *= hammer[n] / (n + 1);
    cout << sum * 1000000000 << endl;
    return 0;
}