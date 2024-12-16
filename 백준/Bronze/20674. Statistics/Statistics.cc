#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N; cin >> N;
    int cnt[10000 + 1];
    loop(i, N) cin >> cnt[i];
    int min = cnt[0], sum = 0;
    for(int i = 1; i < N; i++){
        if(cnt[i] > min) sum += cnt[i] - min;
        else min = cnt[i];
    }
    cout << sum;
    return 0;
}