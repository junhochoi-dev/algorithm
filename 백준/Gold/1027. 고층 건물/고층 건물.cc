#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, ans = 0; cin >> N;
    int building[50];
    loop(i, N) cin >> building[i];
    loop(i, N){
        int cnt = 0;
        double minimum = DBL_MAX;
        for(int j = i - 1; j >= 0; j--){
            if(minimum <= (double) (building[i] - building[j]) / (i - j)) continue;
            minimum = (double) (building[i] - building[j]) / (i - j);
            cnt++;
        }
        double maximum = -DBL_MAX;
        for(int j = i + 1; j < N; j++){
            if(maximum >= (double) (building[j] - building[i]) / (j - i)) continue;
            maximum = (double) (building[j] - building[i]) / (j - i);
            cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}