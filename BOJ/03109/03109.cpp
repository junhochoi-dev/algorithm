#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'
int R, C;
int dx[] = {-1, -1, -1};
int dy[] = {-1, 0, 1};
char table[10000][500];
bool visited[10000][500];
char k = '0';
void show(){
    for(int n = 0 ; n < R ; n++){
        for(int m = 0 ; m < C ; m++){
            cout << table[n][m];
        }
        cout << endl;
    }
    cout << endl;
}
bool DFS(int row, int column){
	visited[row][column] = true;
    table[row][column] = '*';
    //show();
    if(column == 0) return true;
    for(int n = 0 ; n < 3 ; n++){
        int tr = row + dy[n];
        int tc = column + dx[n];
        if(tr < 0 || tr >= R || tc < 0 || tc >= C) continue;
        if(table[tr][tc] != '.') continue;  
        if(visited[tr][tc]) continue;
        if(DFS(tr, tc)) {
            return true;
        }
    }
    table[row][column] = '.';
    //show();
    return false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> R >> C;

    for(int n = 0 ; n < R ; n++){
        for(int m = 0 ; m < C ; m++){
            cin >> table[n][m];
        }
    }

    int cnt = 0;
    for(int n = 0 ; n < R ; n++){
        if(table[n][C-1] == '.' && table[n][C-2] == '.'){
            if(DFS(n, C-2)){
            	cnt++;
            	//k++;
			}
        }
    }
    cout << cnt << endl;
    return 0;
}