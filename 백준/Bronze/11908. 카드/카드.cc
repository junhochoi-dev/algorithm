#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, ans = 0; cin >> N;
    vector<int> arr(N);
    loop(i, N) cin >> arr[i];
    sort(arr.begin(), arr.end());
    loop(i, N - 1) ans += arr[i];
    cout << ans;
    return 0;
}