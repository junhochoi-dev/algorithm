#include <iostream>
#define endl '\n'
using namespace std;
int N, cnt;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1}, normal = 0, abnormal = 0;
char ch, color;
char table[100][100];
bool visited[100][100], check;
void DFS(int row, int column){
    visited[row][column] = true;
    for(int n = 0 ; n < 4 ; n++){
        int x = row + dx[n];
        int y = column + dy[n];
        if(x >= 0 && x < N && y >= 0 && y < N && !visited[x][y] && table[x][y] == color && check){
            DFS(x, y);
        }
        if(x >= 0 && x < N && y >= 0 && y < N && !visited[x][y] && table[x][y] != color && !check){
            DFS(x, y);
        }
    }
}
void default_table(){
    for(int n = 0 ; n < N ; n++) for(int m = 0 ; m < N ; m++) visited[n][m] = false;
}
int count(char color){
    cnt = 0;
    default_table();
    for(int n = 0 ; n < N ; n++){
        for(int m = 0 ; m < N ; m++){
            if(table[n][m] == color && !visited[n][m] && check){
                DFS(n, m);
                cnt++;
            }
            if(table[n][m] != color && !visited[n][m] && !check){
                DFS(n, m);
                cnt++;
            }
        }
    }
    default_table();
    return cnt;
}
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> N;
    for(int n = 0 ; n < N ; n++){
        for(int m = 0 ; m < N ; m++){
            cin >> table[n][m];
            visited[n][m] = false;
        }
        cin.ignore();
    }
    
    color = 'B';
    check = true;
    normal = abnormal = count(color);
    check = false;
    abnormal += count(color);
    
    check = true;
    color = 'G';
    normal += count(color);
    
    color = 'R';
    normal += count(color);
    
    cout << normal << ' ' << abnormal << endl;
    return 0;
}