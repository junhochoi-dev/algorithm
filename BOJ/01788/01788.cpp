#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <map>
#include <set>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'

#define MOD 1000000000
int main() {
    fastio
    // F(n) = F(n-1) + F(n-2)
    // F(n-2) = F(n) - F(n-1)
    long long u[1000001], d[1000001];
    u[0] = d[0] = 0;
    u[1] = d[1] = 1;
    int N;
    cin >> N;
    if(N > 0) {
        for(int n = 2 ; n <= N ; n++) u[n] = (u[n - 1] + u[n - 2]) % MOD;
        cout << 1 << endl << u[N] << endl;
    }
    else if(N < 0){
        N = -N;
        for(int n = 2 ; n <= N ; n++) {
            d[n] = d[n - 2] - d[n - 1];
            if(d[n] < 0) d[n] = -((-d[n]) % MOD);
            else d[n] %= MOD;
        }
        if(d[N] > 0) cout << 1 << endl;
        else if(d[N] < 0) cout << -1 << endl;
        else cout << 0 << endl;
        
        cout << abs(d[N]) << endl;
    }
    else cout << 0 << endl << d[0] << endl;
    return 0;
}