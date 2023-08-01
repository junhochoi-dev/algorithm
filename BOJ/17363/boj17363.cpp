#include <iostream>
#include <string>
using namespace std;
int main() {
	char table[100][100];
	int N, M;
	cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cin >> table[M - m - 1][n];
		}
		cin.ignore();
	}
	for (int n = 0; n < M; n++) {
		for (int m = 0; m < N; m++) {
			switch (table[n][m]) {
			case '-':
				cout << '|';
				break;
			case '|':
				cout << '-';
				break;
			case '/':
				cout << '\\';
				break;
			case '\\':
				cout << '/';
				break;
			case '^':
				cout << '<';
				break;
			case '<':
				cout << 'v';
				break;
			case 'v':
				cout << '>';
				break;
			case '>':
				cout << '^';
				break;
			default:
				cout << table[n][m];
				break;
			}
		}
		cout << endl;
	}
	return 0;
}