#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int T; cin >> T;
    while(T--){
        int N; cin >> N;
        cout << N * (N + 1) / 2 << " ";
        cout << N * N << " ";
        cout << (N + 1) * N << endl;
    }
    return 0;
}

