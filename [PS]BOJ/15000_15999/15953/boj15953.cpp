#include <iostream>
using namespace std;
int main() {
	int sum;
	int test_case, first, second;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		sum = 0;
		cin >> first >> second;
		if (first == 1) { sum += 5000000; }
		else if (first > 1 && first <= 3) { sum += 3000000; }
		else if (first > 3 && first <= 6) { sum += 2000000; }
		else if (first > 6 && first <= 10) { sum += 500000; }
		else if (first > 10 && first <= 15) { sum += 300000; }
		else if (first > 15 && first <= 21) { sum += 100000; }

		if (second == 1) { sum += 5120000; }
		else if (second > 1 && second <= 3) { sum += 2560000; }
		else if (second > 3 && second <= 7) { sum += 1280000; }
		else if (second > 6 && second <= 15) { sum += 640000; }
		else if (second > 10 && second <= 31) { sum += 320000; }
		
		cout << sum << endl;
	}
	return 0;
}