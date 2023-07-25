#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
int main() {
    fastio;
    int table[101][101];
    int N;
    cin >> N;
    bool oddEven = true; // odd = true , even = false;
    bool odd = false;
    bool even = false;
    for(int n = 1 ; n <= N ; n++){
        for(int m = 1 ; m <= N ; m++){
            cin >> table[n][m];
            if(table[n][m] == 2 && (n + m) % 2 == 0)oddEven = false;
            if(table[n][m] == 1){
                if((n + m) % 2 == 0) even = true;
                else odd = true;
            }
        }
    }
    if((oddEven && even && !odd) || (!oddEven && !even && odd) || (!even && !odd)) cout << "Lena" << endl;
    else cout << "Kiriya" << endl;

    return 0;
}