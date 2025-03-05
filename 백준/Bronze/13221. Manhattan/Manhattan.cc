#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int x, y, n; cin >> x >> y >> n;
    vector<tuple<int, int, int>> taxi;
    loop(i, n){
        int tx, ty; cin >> tx >> ty;
        taxi.push_back({abs(x - tx) + abs(y - ty), tx, ty});
    }
    sort(taxi.begin(), taxi.end());
    cout << get<1>(taxi[0]) << " " << get<2>(taxi[0]);
    return 0;
}