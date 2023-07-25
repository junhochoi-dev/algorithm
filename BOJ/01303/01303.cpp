#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
#define endl '\n'
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int N, M;
char table[100][100];
bool visited[100][100];
int DFS(int row, int column, char color){
	int sum = 0;
	visited[row][column] = true;
	for(int k = 0 ; k < 4 ; k++){
		int tr = row + dy[k];
		int tc = column + dx[k];
		if(tr < 0 || tc < 0 || tr >= N || tc >= M) continue;
		if(visited[tr][tc]) continue;
		if(table[tr][tc] != color) continue;
		sum += DFS(tr, tc, color);
	}
	return sum + 1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> M >> N;
    int blue = 0, white = 0;
    for(int n = 0 ; n < N ; n++){
    	for(int m = 0 ; m < M ; m++){
    		visited[n][m] = false;
    		cin >> table[n][m];
		}
	}
	
	for(int n = 0 ; n < N ; n++){
    	for(int m = 0 ; m < M ; m++){
			int mp = 0;
    		if(visited[n][m]) continue;
    		if(table[n][m] == 'B'){
    			mp = DFS(n, m, 'B');
    			blue += pow(mp, 2);
			}
			else{ // table[n][m] == 'W'
    			mp = DFS(n, m, 'W');
    			white += pow(mp, 2);
			}
		}
	}
	cout << white << ' ' << blue << endl;
    return 0;
}