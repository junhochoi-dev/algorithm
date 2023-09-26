#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int size, *arr, *dp, ans;
    cin >> size;
    arr = new int[size];
    dp = new int[size];
    for(int n = 0 ; n < size ; n++) cin >> arr[n];
    ans = dp[0] = arr[0];
    for(int n = 1 ; n < size ; n++){
    	dp[n] = max(dp[n-1] + arr[n], arr[n]);
    	ans = max(ans, dp[n]);
    }
    cout << ans << endl;
    
    return 0;
}