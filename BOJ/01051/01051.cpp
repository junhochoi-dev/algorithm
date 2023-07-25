#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <map>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'
int main() {
    fastio
    int N, M, max_size = 1, size;
    char table[50][50];
    cin >> N >> M;
    loop(n, N) loop(m, M) cin >> table[n][m];
    loop(n, N) loop(m, M){
        for(int k = 0 ; k + n < N && k + m < M ; k++){
            if(table[n][m] == table[n + k][m + k]){
                if(table[n][m] == table[n][m + k] && table[n + k][m] == table[n + k][m + k]){
                    max_size = max(max_size, (k + 1) * (k + 1));
                }
            }
        }
    }
    cout << max_size << endl;
    return 0;
}