#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, M, map[300][300];
    cin >> N >> M;
    loop(i, N) loop(j, M) {
        cin >> map[i][j];
        map[i][j] += max((i > 0 ? map[i - 1][j] : 0), (j > 0 ? map[i][j - 1] : 0));
    }
    cout << map[N - 1][M - 1];
    return 0;
}
