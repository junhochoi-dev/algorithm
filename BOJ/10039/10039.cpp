#include <iostream>
using namespace std;
int main() {
	int score, sum = 0;
	for (int n = 0; n < 5; n++) {
		cin >> score;
		if (score < 40)
			score = 40;
		sum += score;
	}
	cout << sum / 5 << endl;
	return 0;
}