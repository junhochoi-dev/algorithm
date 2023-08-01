#include <iostream>
#define endl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tile[1001] = {0, };
    cin >> N;
    tile[1] = 1;
    tile[2] = 2;
    for(int n = 3 ; n <= N ; n++) tile[n] = (tile[n - 1] + tile[n - 2]) % 10007;
    cout << tile[N] << endl;
    return 0;
}