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
    cout.precision(3);
    int sz;
    cin >> sz;
    double *arr = new double[sz];
    double *dp = new double[sz];
    loop(n, sz) {
        cin >> arr[n];
        dp[n] = arr[n];
    }
    double max_val = dp[0];
    loop(n, sz - 1) {
        dp[n + 1] = max(dp[n + 1], dp[n] * dp[n + 1]);
        max_val = max(max_val, dp[n + 1]);
    }
    cout << max_val << endl;
    return 0;
}