#include <iostream>
#include <algorithm>
#include <queue>
int N, M;
using namespace std;
#define MAXSIZE 8
int ans = 0;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
bool visited[MAXSIZE][MAXSIZE];
int table[MAXSIZE][MAXSIZE];
int temp[MAXSIZE][MAXSIZE];

void BFS(){
	queue<pair<int,int>> que;
	// virus
	for(int n = 0; n < N; n++){
		for(int m = 0; m < M; m++){
			if(temp[n][m] == 2)
				que.push(make_pair(m,n));
		}
	}
	while(!que.empty()){
		int tx = que.front().first;
		int ty = que.front().second;
		for(int n = 0; n < 4; n++){
			int x = tx + dx[n];
			int y = ty + dy[n];
			if(x < 0 || y < 0 || x >= M || y >= N) continue;
			if(visited[y][x] || table[y][x] == 1 || table[y][x] == 2) continue;
			visited[y][x] = true;
			temp[y][x] = 2;
			que.push(make_pair(x,y));
		}
		que.pop();
	}
}
int safeZone(){
	int cnt = 0;
	for(int n = 0; n < N; n++){
		for(int m = 0; m < M; m++){
			if(temp[n][m] == 0)
				cnt++;
		}
	}
	return cnt;
}
void wall(int cnt){
	if(cnt == 3){
		BFS();
		ans = max(ans, safeZone());
		// default
		for(int n = 0; n < N; n++){
			for(int m = 0; m < M; m++){
				temp[n][m] = table[n][m];
				visited[n][m] = false;
			}
		}
		return;
	}
	for(int n = 0; n < N; n++){
		for(int m = 0; m < M; m++){
			if(temp[n][m] == 0){
				temp[n][m] == 1;
				wall(cnt + 1);
				temp[n][m] == 0;
			}
		}
	}
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	cin >> N >> M;
	for(int n = 0; n < N; n++){
		for(int m = 0; m < M; m++){
			cin >> table[n][m];
		}
	}
	wall(0);
	cout << ans << endl;
    return 0;
}

// ctrl + alt + c -> build
// ctrl + alt + r -> execute\