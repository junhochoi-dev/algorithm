#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    ll arr[100 + 1][100 + 1] = {0, };
    bool cv[100 + 1][100 + 1] = {false, };
    bool ch[100 + 1][100 + 1] = {false, };
    int N, M, K; cin >> N >> M >> K;
    while(K--){
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        if(y2 != y1) cv[max(y1, y2)][max(x1, x2)] = true;
        if(x2 != x1) ch[max(y1, y2)][max(x1, x2)] = true;
    }
    arr[0][0] = 1;
    loop(i, M + 1) loop(j, N + 1){
        if(i == 0 && j == 0) continue;
        if(i > 0 && !cv[i][j]) arr[i][j] += arr[i - 1][j];
        if(j > 0 && !ch[i][j]) arr[i][j] += arr[i][j - 1];
    }
    cout << arr[M][N] << endl;
    return 0;
}