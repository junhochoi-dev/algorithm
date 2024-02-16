#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
char arr[25][25];
int  side, dy[4] = {1 , 0 , -1, 0}, dx[4] = {0, 1, 0, -1}, apartment[625] = {0, };
bool visited[25][25];
void DFS(int N, int M, int cnt){
    visited[N][M] = true;
    apartment[cnt]++;
    for(int n = 0 ; n < 4; n++){
        int row = N + dy[n], column = M + dx[n];
        if(!visited[row][column] && arr[row][column] == '1' && row >= 0 && row < side && column >= 0 && column < side)
            DFS(row, column, cnt);
    }
}
int main() {
    for(int n = 0 ; n < 25 ; n++){
        for(int m = 0 ; m < 25 ; m++){
            arr[n][m] = '0';
            visited[n][m] = false;
        }
    }
    int cnt = 0;
    cin >> side;
    cin.ignore();
    for(int n = 0 ; n < side ; n++){
        for(int m = 0 ; m < side ; m++){
            cin >> arr[n][m];
        }
        cin.ignore();
    }
    for(int n = 0 ; n < side ; n++){
        for(int m = 0 ; m < side ; m++){
            if(!visited[n][m] && arr[n][m] == '1'){
                DFS(n, m, cnt);
                cnt++;
            }
        }
    }
    sort(apartment, apartment + cnt);
    cout << cnt << endl;
    for(int n = 0 ; n < cnt ; n++) cout << apartment[n] << endl;
    return 0;
}