#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>
#include <cmath>
#include <queue>
#include <map>
#include <set>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'

int main() {
    fastio
    int arr[1000], dp[1000];
    int sz;
    cin >> sz;
    loop(n, sz){
        cin >> arr[n];
        dp[n] = arr[n];
    }
    int mx = arr[0];
    for(int n = 1 ; n < sz ; n++){
        for(int m = 0 ; m < n ; m++) {
            if (arr[n] > arr[m] && dp[n] < dp[m] + arr[n]) {
                dp[n] = dp[m] + arr[n];
            }
        }
        if(mx < dp[n]) mx = dp[n];
    }
    cout << mx << endl;
    return 0;
}