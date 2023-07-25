#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'

int dx[] = {1, -1, 0, 0, 0, 0};
int dy[] = {0, 0, 1, -1, 0, 0};
int dz[] = {0, 0, 0, 0, 1, -1};
int M, N, H;
int tomato[100][100][100];
bool visited[100][100][100];
set<tuple<int, int, int>> noripetomatolist;

void BFS(int z0, int y0, int x0){
    queue<tuple<int, int, int>> que;
    que.push({z0, y0, x0});

    while(!que.empty()){
        int z = get<0>(que.front());
        int y = get<1>(que.front());
        int x = get<2>(que.front());
        visited[z][y][x] = true;
        que.pop();
        loop(k, 6){
            int tz = z + dz[k];
            int ty = y + dy[k];
            int tx = x + dx[k];
            if(tz < 0 || tz >= H || ty < 0 || ty >= N || tx < 0 || tx >= M) continue;
            if(visited[tz][ty][tx]) continue;
            if(tomato[tz][ty][tx] == -1) continue;
            visited[tz][ty][tx] = true;
            que.push({tz, ty, tx});
        }
    }
}

void oneday(){
    set<tuple<int, int, int>> tmp;
    for(auto iter = noripetomatolist.begin(); iter != noripetomatolist.end(); iter++){
        int z = get<0>(*iter);
        int y = get<1>(*iter);
        int x = get<2>(*iter);
        tomato[z][y][x] = 1;
    }
    for(auto iter = noripetomatolist.begin(); iter != noripetomatolist.end(); iter++){
        int z = get<0>(*iter);
        int y = get<1>(*iter);
        int x = get<2>(*iter);
        loop(k, 6) {
            int tz = z + dz[k];
            int ty = y + dy[k];
            int tx = x + dx[k];
            if(tz < 0 || tz >= H || ty < 0 || ty >= N || tx < 0 || tx >= M) continue;
            if(tomato[tz][ty][tx] == 0) tmp.insert({tz, ty, tx});
        }
    }
    noripetomatolist = tmp;
}

int main() {
    fastio
    cin >> M >> N >> H;
    // input
    loop(h, H) loop(n, N) loop(m, M){
        cin >> tomato[h][n][m];
        visited[h][n][m] = false;
    }
    // connect check
    loop(h, H) loop(n, N) loop(m, M){
        if(tomato[h][n][m] == 1 && !visited[h][n][m]) BFS(h, n, m);
    }

    bool check = true;
    loop(h, H) loop(n, N) loop(m, M){
        if(tomato[h][n][m] == 0) {
            if(!visited[h][n][m]) check = false;
            loop(k, 6){
                int tz = h + dz[k];
                int ty = n + dy[k];
                int tx = m + dx[k];
                if(tz < 0 || tz >= H || ty < 0 || ty >= N || tx < 0 || tx >= M) continue;
                if(tomato[tz][ty][tx] == 1){
                    noripetomatolist.insert({h, n, m});
                    break;
                }
            }

        }
    }
    if(check){
        int day = 0;
        while(true){
            if(noripetomatolist.empty()) break;
            oneday();
            day++;
        }
        cout << day << endl;
    }
    else cout << -1 << endl;
    return 0;
}
