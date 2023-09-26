#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'

int main() {
    fastio
    int dot[20][2];
    int sz, sum = 0;
    cin >> sz;
    for(int n = 0 ; n < sz; n++) cin >> dot[n][0] >> dot[n][1];
    for(int n = 0 ; n < sz - 1 ; n++) {
        sum += abs(dot[n][0] - dot[n + 1][0]);
        sum += abs(dot[n][1] - dot[n + 1][1]);
    }
    sum += abs(dot[0][0] - dot[sz - 1][0]);
    sum += abs(dot[0][1] - dot[sz - 1][1]);
    cout << sum << endl;
    return 0;
}
