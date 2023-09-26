#include <iostream>
#define endl '\n'
using namespace std;
int N, M, x, y, table[50][50], cleanArea[50][50], direction;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
// direction 0:↑ 1:→ 2:↓ 3:←
void move(int x_tmp, int y_tmp){
    x += x_tmp;
    y += y_tmp;
}
bool cleanOrWall(){
    for(int n = 0 ; n < 4 ; n++){
        if(!(table[x + dx[n]][y + dy[n]] == 1 || cleanArea[x + dx[n]][y + dy[n]] == 7))
            return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    cin >> x >> y >> direction;
    for(int n = 0 ; n < N ; n++) for(int m = 0 ; m < M ; m++) {
        cin >> table[n][m];
        cleanArea[n][m] = table[n][m];
    }
    while(true){
        cleanArea[x][y] = 7;
        while(true){
            int tmp = direction;
            tmp == 0 ? tmp = 3 : tmp--;
            if(cleanOrWall() && table[x + dx[direction] * (-1)][y + dy[direction] * (-1)] != 1){
                move(dx[direction] * (-1), dy[direction] * (-1));
                continue;
            }
            else if(cleanOrWall() && table[x + dx[direction] * (-1)][y + dy[direction] * (-1)] == 1){
                int sum = 0;
                for(int n = 0 ; n < N ; n++) for(int m = 0 ; m < M ; m++) if(cleanArea[n][m] == 7) sum++;
                cout << sum << endl;
                return 0;
            }
            else if(cleanArea[x + dx[tmp]][y + dy[tmp]] == 0){
                direction == 0 ? direction = 3 : direction--;
                move(dx[direction], dy[direction]);
                break;
            }
            else if(table[x + dx[tmp]][y + dy[tmp]] == 1 || cleanArea[x + dx[tmp]][y + dy[tmp]] == 7){
                direction == 0 ? direction = 3 : direction--;
                continue;
            }
        }
    }
    return 0;
}