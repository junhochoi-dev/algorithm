#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    ll answer = 0;
    ll N; cin >> N;
    while(N != 1){
        if(N % 2 == 0) N >>= 1;
        else N = N * 3 + 1;
        answer++;
    }
    cout << answer << endl;
    return 0;
}
