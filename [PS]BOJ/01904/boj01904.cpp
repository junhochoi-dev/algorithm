#include <iostream>
using namespace std;
int dp[1000001];
int main(){
    int x;
    cin >> x;
    dp[1] = 1;
    dp[2] = 2;
    for(int n = 3; n <= x; n++){
        dp[n] = dp[n-1] + dp[n-2];
        dp[n] %= 15746;
    }
    cout << dp[x] << endl;
    return 0;
}