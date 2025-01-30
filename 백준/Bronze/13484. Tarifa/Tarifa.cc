#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

#define SIZE 401

int main() {
    fastio
    int X, N; cin >> X >> N;
    int ans = X * (N + 1);
    loop(i, N){
        int used; cin >> used;
        ans -= used;
    }
    cout << ans;
    return 0;
}