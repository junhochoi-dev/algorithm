#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int H, W; cin >> H >> W;
    int maximum_left = 0, maximum_right = 0, answer = 0;
    int block[500], left[500], right[500];
    loop(i, W) cin >> block[i];
    loop(i, W){
        left[i] = maximum_left = max(maximum_left, block[i]);
        right[W - i - 1] = maximum_right = max(maximum_right, block[W - i - 1]);
    }
    loop(i, W) answer += max(0, min(left[i], right[i]) - block[i]);
    cout << answer << endl;
    return 0;
}