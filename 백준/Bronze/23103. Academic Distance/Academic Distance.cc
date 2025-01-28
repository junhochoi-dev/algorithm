#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

#define SIZE 401

int main() {
    fastio
    int N, ans = 0, x[100], y[100]; cin >> N;
    loop(i, N) cin >> x[i] >> y[i];
    loop(i, N - 1) ans += abs(x[i] - x[i + 1]) + abs(y[i] - y[i + 1]);
    cout << ans;
    return 0;
}