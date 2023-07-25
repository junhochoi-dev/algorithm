#include <iostream>
#define MAX 100
using namespace std;
char table[MAX * 5 + 1][MAX * 5 + 1];
int win[5] = {0, };
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	int row, column, tr, tc;
	cin >> row >> column;
	for(int n = 0; n < 5 * row + 1; n++){
		for(int m = 0; m < 5 * column + 1; m++){
			cin >> table[n][m];
		}
		cin.ignore();
	}
	for(int n = 0; n < row; n++){
		for(int m = 0; m < column; m++){
			tr = 5 * n + 1;
			tc = 5 * m + 1;
			if(table[tr + 3][tc] == '*') win[4]++;
			else if(table[tr + 2][tc] == '*') win[3]++;
			else if(table[tr + 1][tc] == '*') win[2]++;
			else if(table[tr][tc] == '*') win[1]++;
			else win[0]++;
		}
	}
	for(int n = 0 ; n < 5 ; n++)
		cout << win[n] << ' ';
	return 0;
}