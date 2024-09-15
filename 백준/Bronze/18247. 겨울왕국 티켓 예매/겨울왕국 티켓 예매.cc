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
        int N, M; cin >> N >> M;
        cout << (M < 4 || N < 12 ? -1 : 11 * M + 4) << endl;
    }
    return 0;
}