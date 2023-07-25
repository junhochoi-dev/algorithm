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
#define MOD 10007
int main() {
    fastio
    int N, M;
    cin >> N >> M;
    int table[1001][1001];
    table[0][0] = 1;
    loop(n, N + 1) loop(m, N + 1){
        if(m == 0) table[n][m] = 1;
        else if(n == m) table[n][m] = 1;
        else table[n][m] = (table[n - 1][m] % MOD + table[n - 1][m - 1] % MOD) % MOD;
    }
    cout << table[N][M] << endl;
    return 0;
}