#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'
int main() {
    fastio
    int N, M, r1, r2, c1, c2;
    int table[101][101];
    loop(n, 100) loop(m, 100) table[n + 1][m + 1] = 0;
    cin >> N >> M;
    loop(n, N){
        cin >> r1 >> c1 >> r2 >> c2;
        for(int r = r1 ; r <= r2 ; r++){
            for(int c = c1 ; c <= c2 ; c++){
                table[r][c]++;
            }
        }
    }
    int cnt = 0;
    loop(n, 100) loop(m, 100) if(table[n + 1][m + 1] <= M) cnt++;
    cout << 10000 - cnt << endl;
    return 0;
}