#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    ll N, A, PA, B, PB, maximum = 0, mx = 0, my = 0;
    cin >> N;
    cin >> A >> PA >> B >> PB;
    for (ll x = N / PA ; x >= N % PB / PA ; x--){
        ll y = (N - PA * x) / PB;
        if(maximum < A * x + B * y){
            maximum = A * x + B * y;
            mx = x;
            my = y;
        }
    }
    cout << mx << ' ' << my << endl;
    return 0;
}
