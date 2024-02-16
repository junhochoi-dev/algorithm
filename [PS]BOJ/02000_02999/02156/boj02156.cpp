#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
#define endl '\n'
int dp[10000];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int size, ans = 0;
    cin >> size;
    int *arr = new int[size];
    for(int n = 0; n < size; n++) cin >> arr[n];
    dp[0] = arr[0];
    dp[1] = arr[0] + arr[1];
    dp[2] = max(max(arr[0] + arr[1], arr[1] + arr[2]), arr[0] + arr[2]);
    for(int n = 3; n < size; n++){
        dp[n] = arr[n] + max(arr[n-1] + dp[n-3], dp[n-2]);
        dp[n] = max(dp[n], dp[n-1]);
    }
    for(int n = 0; n < size; n++){
        ans = max(ans, dp[n]);
    }
    cout << ans << endl;
    return 0;
}