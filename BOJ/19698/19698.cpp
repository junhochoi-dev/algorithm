#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'

int main() {
    fastio
    int N, W, H, L;
    cin >> N >> W >> H >> L;
    cout << min(N, (W / L) * (H / L)) << endl;
    return 0;
}