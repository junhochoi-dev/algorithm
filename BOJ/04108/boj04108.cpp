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
    char table[100][100];
    int bombmap[100][100];
    int dx[] = {1, 1, 1, 0, 0, 0, -1, -1, -1};
    int dy[] = {1, -1, 0, 1, -1, 0, 1, -1, 0};

    int N, M;
    while(true){
        cin >> N >> M;
        if(N == 0 && M == 0) break;
        loop(n, N) loop(m, M) {
            cin >> table[n][m];
            if(table[n][m] == '*') bombmap[n][m] = -1;
            else bombmap[n][m] = 0;
        }
        loop(n, N) loop(m, M){
            if(table[n][m] != '*') continue;
            loop(k, 9){
                int tr = n + dx[k];
                int tc = m + dy[k];
                if(tr == n && tc == m) continue;
                if(tr < 0 || tc < 0 || tr >= N || tc >= M) continue;
                if(table[tr][tc] == '*') continue;
                bombmap[tr][tc]++;
            }
        }
        loop(n, N) {
            loop(m, M){
                if(table[n][m] == '*') cout << '*';
                else cout << bombmap[n][m];
            }
            cout << endl;
        }
    }
    return 0;
}