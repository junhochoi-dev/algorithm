#include <iostream>
#define endl '\n'
#define MAX 300
using namespace std;
bool visited[MAX][MAX];
int table[MAX][MAX], N, M;
int melting_table[MAX][MAX];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
void default_visited() {for(int n = 0 ; n < N ; n++) for(int m = 0 ; m < M ; m++) visited[n][m] = false;}
bool no_iceberg(){
    int sum = 0;
    for(int n = 0 ; n < N ; n++) for(int m = 0 ; m < M ; m++) sum += table[n][m];
    if(sum > 0) return false;
    else return true;
}
void DFS(int row, int column){
    visited[row][column] = true;
    for(int k = 0 ; k < 4 ; k++){
        int x = row + dx[k];
        int y = column + dy[k];
        if(x >= 0 && x < N && y >= 0 && y < M && !visited[x][y] && table[x][y] != 0) DFS(x, y);
    }
}
void melting(){
    for(int n = 0 ; n < N ; n++) for(int m = 0 ; m < M ; m++){
        melting_table[n][m] = 0;
        if(table[n][m] != 0){
            for(int k = 0 ; k < 4 ; k++){
                int x = n + dx[k];
                int y = m + dy[k];
                if(x >= 0 && x < N && y >= 0 && y < M && table[x][y] == 0) melting_table[n][m]++;
            }
        }
    }
    for(int n = 0 ; n < N ; n++) for(int m = 0 ; m < M ; m++) {
        if(table[n][m] < melting_table[n][m]) table[n][m] = 0;
        else table[n][m] -= melting_table[n][m];
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for(int n = 0 ; n < N ; n++) for(int m = 0 ; m < M ; m++) cin >> table[n][m];
    int year = 0;
    while(true){
        if(no_iceberg()) {
            cout << 0 << endl;
            return 0;
        }
        int cnt = 0;
        default_visited();
        for(int n = 0 ; n < N ; n++) for(int m = 0 ; m < M ; m++) if(!visited[n][m] && table[n][m] != 0) {
            DFS(n, m);
            cnt++;
        }
        if(cnt > 1) break;
        year++;
        melting();
    }
    cout << year << endl;
    return 0;
}