#include <iostream>
using namespace std;
int main() {
	int table[100][100];
	int N, M, sum_row = 0, sum_column = 0;
	cin >> N >> M;
	for(int n = 0 ; n < N ; n++){
		for(int m = 0 ; m < M ; m++){
			cin >> table[n][m];
		}
	}
	for(int n = 0 ; n < N ; n++){
		int max = 0;
		for(int m = 0 ; m < M ; m++){
			if(table[n][m] > max) max = table[n][m];
		}
		sum_row += max;
	}
	for(int n = 0 ; n < M ; n++){
		int max = 0;
		for(int m = 0 ; m < N ; m++){
			if(table[n][m] > max) max = table[n][m];
		}
		sum_column += max;
	}
	cout << 2 * (sum_column + sum_row) + N * M * 2 << endl;
	return 0;
}