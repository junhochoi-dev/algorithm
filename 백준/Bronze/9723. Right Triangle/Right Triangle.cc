#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

#define SIZE 401

int main() {
    fastio
    int N; cin >> N;
    loop(i, N){
        int side[3]; loop(j, 3) cin >> side[j];
        sort(side, side + 3);
        string ans = (side[2] * side[2] == side[0] * side[0] + side[1] * side[1] ? "YES" : "NO");
        cout << "Case #" << i + 1 << ": " << ans << endl;
    }
    return 0;
}