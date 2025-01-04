#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    ll N, W, D, SUM;
    while(cin >> N >> W >> D >> SUM){
         ll IDX = (W * N * (N - 1) / 2 - SUM) / D;
         cout << (IDX ? IDX : N) << endl;
    }
    return 0;
}