#include <iostream>
#include <algorithm>
#define endl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool dp[301] = {false, };
    int arr[3], size;
    for(int n = 0 ; n < 3 ; n++) cin >> arr[n];
    cin >> size;
    dp[size] = true;
    for(int n = size ; n >= 0 ; n--) if(dp[n]) for(int m = 0 ; m < 3 ; m++) dp[n - arr[m]] = true;
    cout << dp[0] ? true : false;
    return 0;
}