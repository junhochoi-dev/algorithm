#include <iostream>
using namespace std;
int arr[300][300];
int main(){
	int N, M, sum, cnt, i, j, x, y;
	cin >> N >> M;
	for(int n = 0 ; n < N ; n++){
		for(int m = 0 ; m < M ; m++){
			cin >> arr[n][m];
		}
	}
	cin >> cnt;
	for(int k = 0 ; k < cnt ; k++){
		sum = 0;
		cin >> i >> j >> x >> y;
		for(int n = i - 1 ; n < x ; n++){
			for(int m = j - 1 ; m < y ; m++){
				sum += arr[n][m];
			}
		}
		cout << sum << endl;
	}
	return 0;
}