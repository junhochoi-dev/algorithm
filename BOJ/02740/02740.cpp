#include <iostream>
using namespace std;
int main(){
    int A[100][100] = { 0, }, B[100][100] = { 0, }, table[100][100] = { 0, }, N, M, K;
    cin >> N >> M;
    for(int n = 0 ; n < N ; n++){
        for(int m = 0 ; m < M ; m++){
            cin >> A[n][m];
        }
    }
    cin >> M >> K;
    for(int n = 0 ; n < M ; n++){
        for(int m = 0 ; m < K ; m++){
            cin >> B[n][m];
        }
    }
    for(int n = 0 ; n < N ; n++){
        for(int m = 0 ; m < K ; m++){
            for(int k = 0 ; k < M ; k++){
                table[n][m] += A[n][k] * B[k][m];
            }
        }
    }
    for(int n = 0 ; n < N ; n++){
        for(int m = 0 ; m < K ; m++){
            cout << table[n][m] << ' ';
        }
        cout << endl;
    }
    return 0;
}