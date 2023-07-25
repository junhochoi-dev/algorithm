#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    // 56UR + 24TR + 14UO + 6TO
    int in[4];
    for(int n = 0 ; n < 4 ; n++) cin >> in[n];
    cout << 56 * in[0] + 24 * in[1] + 14 * in[2] + 6 * in[3] << endl;
    return 0;
}