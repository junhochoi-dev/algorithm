#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    int T; cin >> T;
    while(T--){
        char map[100][100];
        int H, W; cin >> H >> W;
        loop(i, H){
            string tmp; cin >> tmp;
            loop(j, W) map[i][j] = tmp[j];
        }
        int answer = 0;
        loop(i, H) loop(j, W){
            if(map[i][j] == '.') continue;
            answer++;
            queue<pair<int, int>> queue;
            queue.push(make_pair(i, j));
            map[i][j] = '.';
            while(!queue.empty()){
                int x = queue.front().first;
                int y = queue.front().second;
                queue.pop();
                loop(k, 4){
                    int nx = x + dx[k];
                    int ny = y + dy[k];
                    if(nx < 0 || ny < 0 || nx >= H || ny >= W) continue;
                    if(map[nx][ny] == '.') continue;
                    map[nx][ny] = '.';
                    queue.push(make_pair(nx, ny));
                }
            }
        }
        cout << answer << endl;
    }
    return 0;
}