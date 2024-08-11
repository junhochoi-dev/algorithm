#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    ll S, C, sum = 0;
    cin >> S >> C;
    vector<ll> greenonion;
    loop(i, S){
        int go;
        cin >> go;
        sum += go;
        greenonion.push_back(go);
    }
    ll low = 1, high = 1000000000000000L, maximumlength = 0;
    while(low <= high){
        ll mid = (low + high) / 2;
        ll cnt = 0, remains = 0;
        loop(i, S){
            cnt += greenonion[i] / mid;
            remains += greenonion[i] % mid;
        }
        if(cnt >= C){
            maximumlength = max(maximumlength, mid);
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << sum - maximumlength * C << endl;
    return 0;
}
