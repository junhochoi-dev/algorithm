#include <iostream>
using namespace std;
int main() {
	int score, sum, max = 0, winner;
	for (int n = 0; n < 5; n++) {
		sum = 0;
		for (int m = 0; m < 4; m++) {
			cin >> score;
			sum += score;
		}
		if (max < sum) {
			max = sum;
			winner = n + 1;
		}
	}
	cout << winner << ' ' << max << endl;
	return 0;
}
