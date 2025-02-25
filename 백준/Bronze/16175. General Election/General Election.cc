#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int T, N, M; cin >> T;
    while(T--){
        cin >> N >> M;
        int maximum = 0, ans;
        int arr[100][100], sum[100];
        fill(sum, sum + N, 0);
        loop(i, M) loop(j, N) cin >> arr[i][j];
        loop(i, N) loop(j, M) sum[i] += arr[j][i];
        loop(i, N) if(maximum < sum[i]){
            maximum = sum[i];
            ans = i + 1;
        }
        cout << ans << endl;
    }
    return 0;
}