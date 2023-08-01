#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int num, sum;
	while (true) {
		sum = 0;
		cin >> num;
		if (num == -1)
			break;
		for (int n = 1; n < num; n++) {
			if (num % n == 0)
				sum += n;
		}
		if (num != sum) {
			cout << num << " is NOT perfect." << endl;
		}
		else {
			cout << num << " = 1";
			for (int n = 2; n < num; n++) {
				if (num % n == 0)
					cout << " + " << n;
			}
			cout << endl;
		}
	}
	return 0;
}