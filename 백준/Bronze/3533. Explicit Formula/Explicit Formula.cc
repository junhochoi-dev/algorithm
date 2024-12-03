#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int dp[1024 + 1][1024 + 1];
int main() {
    fastio
    bool answer = false, arr[10]; loop(i, 10) cin >> arr[i];
    loop(i, 10) for(int j = i + 1; j < 10; j++) answer ^= arr[i] | arr[j];
    loop(i, 10) for(int j = i + 1; j < 10; j++) for(int k = j + 1; k < 10; k++) answer ^= arr[i] | arr[j] | arr[k];
    cout << answer << endl;
    return 0;
}