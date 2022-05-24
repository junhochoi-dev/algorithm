#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
#define MAXSIZE 8
int ans = 0;
int N, M;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int table[MAXSIZE][MAXSIZE];
int spread[MAXSIZE][MAXSIZE];
int notSpread[MAXSIZE][MAXSIZE];
void print(){
	for(int n = 0; n < N; n++){
		for(int m = 0; m < M; m++){
			cout << spread[n][m];
		}
		cout << endl;
	}
	cout << endl;
}
void BFS(){
    for(int n = 0; n < N; n++){
		for(int m = 0; m < M; m++){
		    spread[n][m] = notSpread[n][m];
		}
	}
	
	queue<pair<int,int>> que;
	// virus spread
	for(int n = 0; n < N; n++){
		for(int m = 0; m < M; m++){
			if(spread[n][m] == 2)
				que.push(make_pair(m,n));
		}
	}
	while(!que.empty()){
		int tx = que.front().first;
		int ty = que.front().second;
		que.pop();
		for(int n = 0; n < 4; n++){
			int x = tx + dx[n];
			int y = ty + dy[n];
			if(x < 0 || y < 0 || x >= M || y >= N) continue;
			if(spread[y][x] == 1 || spread[y][x] == 2) continue;
			spread[y][x] = 2;
			que.push(make_pair(x,y));
		}
	}
}
int safeZone(){
	int cnt = 0;
	for(int n = 0; n < N; n++){
		for(int m = 0; m < M; m++){
			if(spread[n][m] == 0)
				cnt++;
		}
	}
	return cnt;
}
void wall(int cnt){
	if(cnt == 3){
		BFS();
		ans = max(ans, safeZone());
		return;
	}
	for(int n = 0; n < N; n++){
		for(int m = 0; m < M; m++){
			if(notSpread[n][m] == 0){
				notSpread[n][m] = 1;
				// print();
				wall(cnt + 1);
				notSpread[n][m] = 0;
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
			notSpread[n][m] = table[n][m];
		}
	}
	wall(0);
	cout << ans << endl;
    return 0;
}
