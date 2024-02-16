#include <iostream>
using namespace std;
int main() {
	int size, count, P1_win, P2_win;
	char P1, P2;
	cin >> size;
	for (int n = 0; n < size; n++) {
		cin >> count;
		P1_win = P2_win = 0;
		for (int m = 0; m < count; m++) {
			cin >> P1;
			cin >> P2;
			switch (P1) {
			case 'R':
				switch (P2) {
				case 'R':
					break;
				case 'S':
					P1_win++;
					break;
				case 'P':
					P2_win++;
					break;
				}
				break;
			case 'S':
				switch (P2) {
				case 'R':
					P2_win++;
					break;
				case 'S':
					break;
				case 'P':
					P1_win++;
					break;
				}
				break;
			case 'P':
				switch (P2) {
				case 'R':
					P1_win++;
					break;
				case 'S':
					P2_win++;
					break;
				case 'P':
					break;
				}
				break;
			}
		}
		if (P1_win > P2_win)
			cout << "Player 1" << endl;
		else if (P1_win < P2_win)
			cout << "Player 2" << endl;
		else
			cout << "TIE" << endl;
	}
	return 0;
}