#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
#define endl '\n'
#define MAXSIZE 101
int N, K;
int table[MAXSIZE][MAXSIZE]; // 0 none, 1 apple, 2 body
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int direction = 0; // 0 right, 1 down, 2 left, 3 up
int y = 0, x = 0; // initial point
int apple_cnt = 0;
void shrink(int sy, int sx){
	int tmp_apple_cnt = apple_cnt + 1;
	while(true){
		for(int k = 0 ; k < 4 ; k++){
			int tx = sx + dx[k];
			int ty = sy + dy[k];
			if(tx < 0 || ty < 0 || tx >= N || ty >= N) continue;
			if(table[ty][tx] == 0 || table[ty][tx] == -1) continue;
			if(tmp_apple_cnt == table[ty][tx]){
				table[sy][sx] = table[ty][tx];
				table[ty][tx] = 0;
				sy = ty;
				sx = tx;
				tmp_apple_cnt--;
				break;
			}
		}
		if(tmp_apple_cnt == 0) break;
	}
}
void change(char ch){
	// L 반시계방향
	// D 시계방향
	if(ch == 'L'){
		if(direction == 0) direction = 3;
		else direction--;
	}
	if(ch == 'D'){
		if(direction == 3) direction = 0;
		else direction++;
	}
}
bool move(){
	// apple check
	int tx = x + dx[direction];
	int ty = y + dy[direction];

    // wall check
	if(tx < 0 || ty < 0 || tx >= N || ty >= N) return false;
    // body check
	if(table[ty][tx] > 0 ) return false;

	if(table[ty][tx] == -1){ // expand length
		table[ty][tx] = table[y][x] + 1;
		apple_cnt++;
	}
	else{
		shrink(ty, tx);
	}
	x = tx;
	y = ty;
	return true;
}
void show(){
	for(int n = 0 ; n < N ; n++){
		for(int m = 0 ; m < N ; m++){
			if(table[n][m] == -1) cout << '\t' << 'A';
			else cout << '\t' << table[n][m];
		}
		cout << endl;
	}
	cout << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    int row, column;
    cin >> N >> K;
	// init table
    for(int n = 0 ; n < N ; n++){
        for(int m = 0 ; m < N ; m++){
            table[n][m] = 0;
        }
    }
	table[0][0] = 1;
	// init apple
    for(int n = 0 ; n < K ; n++){
        cin >> row >> column;
        table[row-1][column-1] = -1;
    }
	
	// changed direction list
    int X, size_X;
    char C;
    queue<pair<int, char>> que;
    cin >> size_X;
    for(int n = 0 ; n < size_X ; n++){
        cin >> X >> C;
        que.push(make_pair(X, C));
    }

	int time = 0;
	while(true){
        time++;
		if(!move()) break;
		if(que.front().first == time){
			change(que.front().second);
			que.pop();
		}
		// show();
	}
	cout << time << endl;
    return 0;
}