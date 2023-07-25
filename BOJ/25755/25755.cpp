#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <map>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'

int main() {
    fastio
    char method;
    int N, table[20][20];
    cin >> method >> N;
    loop(n, N) loop(m, N) cin >> table[n][m];
    if(method == 'L' || method == 'R'){
        loop(n, N) {
            for(int m = N - 1 ; m >= 0 ; m--){
                if(table[n][m] == 2) cout << 5 << ' ';
                else if(table[n][m] == 5) cout << 2 << ' ';
                else if(table[n][m] == 8) cout << 8 << ' ';
                else if(table[n][m] == 1) cout << 1 << ' ';
                else cout << '?' << ' ';
            }
            cout << endl;
        }
    }
    else { // U D
        for(int n = N - 1 ; n >= 0 ; n--) {
            loop(m, N){
                if(table[n][m] == 2) cout << 5 << ' ';
                else if(table[n][m] == 5) cout << 2 << ' ';
                else if(table[n][m] == 8) cout << 8 << ' ';
                else if(table[n][m] == 1) cout << 1 << ' ';
                else cout << '?' << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}