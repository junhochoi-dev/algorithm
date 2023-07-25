#include <iostream>
#define MAX 50
using namespace std;
int N, M;
bool table[MAX][MAX];
bool visited[MAX][MAX];
void DFS(int row, int column){
    visited[row][column] = true;
    // up - not over the row && not visited && cabbage ground
    if(row - 1 >= 0  && !visited[row - 1][column] && table[row - 1][column]){
        DFS(row - 1, column);
    }
    // left - not over the column && not visited && cabbage ground
    if(column - 1 >= 0 && !visited[row][column - 1] && table[row][column - 1]){
        DFS(row, column -1);
    }
    // down - not over the row && not visited && cabbage ground
    if(row + 1 < N && !visited[row + 1][column] && table[row + 1][column]){
        DFS(row + 1, column);
    }
    // right - not over the column && not visited && cabbage ground
    if(column + 1 < M && !visited[row][column + 1] && table[row][column + 1]){
        DFS(row, column + 1);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test_case, cabbage, row, column, warm;
    cin >> test_case;
    for(int n = 0 ; n < test_case ; n++){
        cin >> N >> M >> cabbage;
        warm = 0;
        for(int m = 0 ; m < MAX ; m++){ // default table, visited
            for(int k = 0 ; k < MAX ; k++){
                table[m][k] = visited[m][k] = false; 
            }
        }
        for(int m = 0 ; m < cabbage ; m++){ // select cabbage ground
            cin >> row >> column;
            table[row][column] = true;
        }
        for(int m = 0 ; m < N ; m++){
            for(int k = 0 ; k < M ; k++){
                if(!visited[m][k] && table[m][k]){ // not visited && cabbage ground
                    DFS(m, k);
                    warm++;
                }
            }
        }
        cout << warm << endl;
    }
    return 0;
}