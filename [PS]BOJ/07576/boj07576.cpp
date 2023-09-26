#include <iostream>
#include <utility>
#include <queue>
#define endl '\n'
using namespace std;
int tmt[1000][1000], N, M, DAY = -1, row, column;
int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
bool visited[1000][1000];
queue<pair<int, int>> que;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> N >> M;
    for(int n = 0 ; n < M ; n++){
        for(int m = 0 ; m < N ; m++){
            cin >> tmt[n][m];
            if(tmt[n][m] == 1) {
                que.push(make_pair(n, m));
                visited[n][m] = true;
            }
            else
                visited[n][m] = false;
        }
    }
    while(!que.empty()){
        DAY++;
        int tmp = que.size();
        for(int n = 0 ; n < tmp ; n++){
            for(int m = 0 ; m < 4 ; m++){
                row = que.front().first + dx[m];
                column = que.front().second + dy[m];
                if(!(row >= 0 && row < M && column >= 0 && column < N)) continue;
                if(!visited[row][column] && tmt[row][column] == 0){
                    que.push(make_pair(row, column));
                    tmt[row][column] = 1;
                    visited[row][column] = true;
                }
            }
            que.pop();
        }
    }
    for(int n = 0 ; n < M ; n++){
        for(int m = 0 ; m < N ; m++){
            if(tmt[n][m] == 0){
                cout << -1 << endl;
                return 0;
            }
        }
    }
    cout << DAY << endl;
    return 0;
}