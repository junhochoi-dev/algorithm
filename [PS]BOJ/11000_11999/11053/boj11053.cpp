#include <iostream>

using namespace std;

int dp[1000];

int arr[1000];

int main(){

    int size, ans = 0;

    cin >> size;

    for(int n= 0; n < size; n++){
        
    	cin >> arr[n];
        
    }

    dp[0] = 1;

    for(int n = 0; n < size; n++){
        
        dp[n] = 1;

    	for(int m = n - 1; m >= 0; m--){

    		if(arr[n] > arr[m]){

    			dp[n] = max(dp[n], dp[m] + 1);

    		}

    	}

    	ans = max(ans, dp[n]);

    }

    cout << ans << endl;

    

    return 0;

}