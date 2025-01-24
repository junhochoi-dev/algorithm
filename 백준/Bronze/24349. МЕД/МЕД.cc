#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

#define SIZE 401

int main() {
    fastio
    int N, A, B, C, ans = 0; cin >> N >> A >> B >> C;
    if (N > 1) {
        if (A < C || B < C) ans = (N - 1) * min(A, B);
        else ans = min(A, B) + (N - 2) * C;
    }
    cout << ans / 100 << " " << ans % 100;
    return 0;
}