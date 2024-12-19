#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, cnt = 0; cin >> N;
    loop(i, N){
        int ability; cin >> ability;
        if(ability == 1) cnt++;
    }
    if(N % 2) cout << max(0, N / 2 + 1 - cnt);
    else cout << max(0, N / 2 - cnt);
    return 0;
}