#include <iostream>
#include <algorithm>

#include <cmath>
#include <vector>

using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
int table[100][100];
int row[100];
int col[100];
int main() {
    fastio;
    int N, M, sum = 0;
    cin >> N >> M;
    for(int n = 0 ; n < N ; n++) row[n] = 0;
    for(int n = 0 ; n < M ; n++) col[n] = 0;
    for(int n = 0 ; n < N ; n++){
        for(int m = 0 ; m < M ; m++){
            cin >> table[n][m];
            sum += table[n][m];
            row[n] += table[n][m];
            col[m] += table[n][m];
        }
    }
    int max = -987654321;
    for(int n = 0 ; n < N ; n++){
        for(int nn = n + 1 ; nn < N ; nn++){
            for(int m = 0 ; m < M ; m++){
                for(int mm = m + 1 ; mm < M ; mm++){
                    int tmp = row[n] + row[nn] + col[m] + col[mm] - table[n][m] - table[n][mm] - table[nn][m] - table[nn][mm];
                    if(max < tmp + (nn - n - 1) * (mm - m - 1)) max = tmp + (nn - n - 1) * (mm - m - 1);
                }
            }
        }
    }
    cout << max << endl;
    return 0;
}