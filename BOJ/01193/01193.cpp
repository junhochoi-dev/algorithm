#include <iostream>
using namespace std;
int main() {
	int num, sum = 0, count = 0, gap;
	cin >> num;
	if (num == 1)
		cout << "1/1" << endl;
	else {
		for (int n = 1; n <= num; n++) {
			sum += n;
			count++; // diagonal
			if (sum >= num) {
				gap = num - sum + n;
				if (count % 2 == 1) { // odd
					cout << count + 1 - gap << '/' << gap << endl;
				}
				else { // even
					cout << gap << '/' << count + 1 - gap << endl;
				}
				break;
			}
		}
	}
	return 0;
}