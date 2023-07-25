#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>
#include <cmath>
#include <queue>
#include <map>
#include <set>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'

int main() {
    fastio
    int tc, sz;
    ll k, d, a;
    cin >> tc;
    while(tc--){
        cin >> sz;
        ll sum = 0;
        vector<tuple<ll, ll ,ll>> tp;
        while(sz--){
            cin >> k >> d >> a;
            tp.push_back(make_tuple(k, d, a));
        }
        cin >> k >> d >> a;
        loop(n, tp.size()){
            ll tmp = get<0>(tp[n]) * k - get<1>(tp[n]) * d + get<2>(tp[n]) * a;
            sum += tmp > 0 ? tmp : 0;
        }
        cout << sum << endl;
    }
    return 0;
}