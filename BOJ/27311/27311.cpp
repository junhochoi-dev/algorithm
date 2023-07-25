#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
char table[10][10];
bool visited[10][10];
int N, M;
bool hole;
bool wholehole;
void DFS(int x, int y, char ch){
    if(x == 0 || y == 0 || x == N-1 || y == M-1) hole = false;
    visited[x][y] = true;
    for(int k = 0 ; k < 4 ; k++){
        int tx = x + dx[k];
        int ty = y + dy[k];
        if(tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
        if(!visited[tx][ty] && table[tx][ty] == ch) DFS(tx, ty, ch);
    }
}

int main() {
    fastio
    int tc;
    cin >> tc;
    while(tc--){
        cin >> N >> M;
        loop(n, N) loop(m, M) cin >> table[n][m];
        int group = 0;
        wholehole = false;
        loop(n, N) loop(m, M) visited[n][m] = false;
        loop(n, N) loop(m, M) if(!visited[n][m] && table[n][m] == '#') {
                    group++;
                    DFS(n, m, '#');
                }
        loop(n, N) loop(m, M) visited[n][m] = false;
        loop(n, N) loop(m, M) if(!visited[n][m] && table[n][m] == '.') {
                    hole = true;
                    DFS(n, m, '.');
                    if(hole) wholehole = true;
                }
        if(!wholehole && group == 1) {
            bool check = true;

            int xc_min = 999, xc_max = -1;
            int yc_min = 999, yc_max = -1;

            int xb_min = 999, xb_max = -1;
            int yb_min = 999, yb_max = -1;
            loop(n, N) loop(m, M){
                if(table[n][m] == '#') {
                    xc_min = min(xc_min, n);
                    yc_min = min(yc_min, m);
                    xc_max = max(xc_max, n);
                    yc_max = max(yc_max, m);
                }
            }
            for(int n = xc_min; n <= xc_max; n++){
                for(int m = yc_min; m <= yc_max; m++){
                    if(table[n][m] == '.') {
                        xb_min = min(xb_min, n);
                        yb_min = min(yb_min, m);
                        xb_max = max(xb_max, n);
                        yb_max = max(yb_max, m);
                    }
                }
            }
            if(xc_min == xb_min && yc_min == yb_min && xc_max != xb_max && yc_max != yb_max) {}
            else if(xc_min != xb_min && yc_min != yb_min && xc_max == xb_max && yc_max == yb_max) {}
            else if(xc_min == xb_min && yc_min != yb_min && xc_max != xb_max && yc_max == yb_max) {}
            else if(xc_min != xb_min && yc_min == yb_min && xc_max == xb_max && yc_max != yb_max) {}
            else check = false;

            if((xc_min - xc_max != yc_min - yc_max) || (xb_min - xb_max != yb_min - yb_max)) check = false;

            for(int n = xc_min; n <= xc_max; n++){
                for(int m = yc_min; m <= yc_max; m++){
                    if(n >= xb_min && n <= xb_max && m >= yb_min && m <= yb_max){
                        if(table[n][m] != '.') check = false;
                    }
                    else{
                        if(table[n][m] != '#') check = false;
                    }
                }
            }
            if(check) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else cout << 0 << endl;
        // cout << group << ' ' << wholehole << endl;
    }
    return 0;
}
