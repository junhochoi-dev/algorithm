#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
#define endl '\n'

#define mod 1234567
long long password[1001][10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    for(int n = 0 ; n < 10 ; n++) password[1][n] = 1;
    for(int n = 2 ; n <= 1000 ; n++){
    	for(int m = 0 ; m < 10 ; m++){
    		switch(m){
    			case 0:
    				password[n][m] = password[n - 1][7];
					break;
				case 1:
    				password[n][m] = password[n - 1][2] + password[n - 1][4];
					break;
				case 2:
    				password[n][m] = password[n - 1][1] + password[n - 1][3] + password[n - 1][5];
					break;
				case 3:
    				password[n][m] = password[n - 1][2] + password[n - 1][6];
					break;
				case 4:
    				password[n][m] = password[n - 1][1] + password[n - 1][5] + password[n - 1][7];
					break;
				case 5:
    				password[n][m] = password[n - 1][2] + password[n - 1][4] + password[n - 1][6] + password[n - 1][8];
					break;
				case 6:
    				password[n][m] = password[n - 1][3] + password[n - 1][5] + password[n - 1][9];
					break;
				case 7:
    				password[n][m] = password[n - 1][4] + password[n - 1][8] + password[n - 1][0];
					break;
				case 8:
    				password[n][m] = password[n - 1][5] + password[n - 1][7] + password[n - 1][9];
					break;
				case 9:
    				password[n][m] = password[n - 1][6] + password[n - 1][8];
					break;
					
			}
			password[n][m] %= mod;
		}
	}
	int tc, val;
	cin >> tc; 
	while(tc--){
		cin >> val;
		long long sum = 0;
		for(int n = 0 ; n < 10 ; n++) {
			sum += password[val][n];
			sum %= mod;
		}
		cout << sum << endl;
	}
    return 0;
}
