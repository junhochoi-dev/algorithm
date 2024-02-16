#include<iostream>
using namespace std;
int main(){
    int size, ans = 0;
    cin >> size;
    int *arr = new int[size];
    int *dp = new int[size];
    for(int n = 0 ; n < size ; n++){
        cin >> arr[n];
    }
    for(int n = 0 ; n < size ; n++){
        dp[n] = 1; // initialize dp 1
        for(int m = 0 ; m < n ; m++){
            if(arr[n] > arr[m] && dp[n] < dp[m] + 1) // smaller size and better case
                dp[n] = dp[m] + 1;
        }
        if(ans < dp[n]) // maximize answer
                    ans = dp[n];
    }
    cout << ans << endl;
    return 0;
}