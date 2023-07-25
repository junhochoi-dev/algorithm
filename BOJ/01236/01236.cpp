#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char table[50][50];
    int N, M;
    cin >> N >> M;
    for(int n = 0 ; n < N ; n++){
    	for(int m = 0 ; m < M ; m++){
    		cin >> table[n][m];
		}
	}
	int rowCheck = 0;
	for(int n = 0 ; n < N ; n++){
		bool check = true;
    	for(int m = 0 ; m < M ; m++){
    		if(table[n][m] == 'X'){
    			check = false;
    			break;
			}
		}
		if(check) rowCheck++;
	}
	
	int colCheck = 0;
	for(int n = 0 ; n < M ; n++){
		bool check = true;
    	for(int m = 0 ; m < N ; m++){
    		if(table[m][n] == 'X'){
    			check = false;
    			break;
			}
		}
		if(check) colCheck++;
	}
	cout << max(rowCheck, colCheck) << endl;
    return 0;
}