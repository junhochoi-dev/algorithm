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
int main() {
    fastio
    int N, M;
    cin >> N >> M;
    int table[31][31];
    table[0][0] = 1;
    loop(n, N) loop(m, n + 1){
        if(m == 0) table[n][m] = 1;
        else if(n == m) table[n][m] = 1;
        else table[n][m] = table[n - 1][m] + table[n - 1][m - 1];
    }
    cout << table[N - 1][M - 1] << endl;
    return 0;
}