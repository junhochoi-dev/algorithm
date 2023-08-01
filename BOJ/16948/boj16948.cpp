#include <iostream>
#include <algorithm>
#include <queue>
#include <utility>
#define MAXSIZE 200
using namespace std;
bool visited[MAXSIZE][MAXSIZE];
int SIZE;
int table[MAXSIZE][MAXSIZE];
int dx[] = {-2, -2, 0, 0, 2, 2};
int dy[] = {-1, 1, -2, 2, -1, 1};
void BFS(int x1, int y1){
    queue<pair<int,int>> que;
    visited[x1][y1] = true;
    que.push(make_pair(x1,y1));

    while(!que.empty()){
       int x = que.front().first;
       int y = que.front().second;
       que.pop();
       for(int n = 0 ; n < 6 ; n++){
           int nx = x + dx[n];
           int ny = y + dy[n];

           if(!(nx >= 0 && ny >= 0 && nx < SIZE && ny < SIZE)){
               continue;
           }
           if(!visited[nx][ny]){
               visited[nx][ny] = true;
               table[nx][ny] = table[x][y] + 1;
               que.push(make_pair(nx, ny));
           }
       } 
    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x1, y1, x2, y2;
    cin >> SIZE;
    cin >> x1 >> y1 >> x2 >> y2;
    BFS(x1, y1);
    if(table[x2][y2] == 0) cout << -1 << endl;
    else cout << table[x2][y2] << endl;
	return 0;
}