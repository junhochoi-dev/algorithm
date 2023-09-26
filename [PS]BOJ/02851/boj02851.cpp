#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int mushroom[10], sum = 0;
	for (int n = 0; n < 10; n++)
		cin >> mushroom[n];
	for (int n = 0; n < 10; n++) {
		if (abs(100 - sum) < abs(100 - (sum + mushroom[n]))) {
			break;
		}
		else if (abs(100 - sum) > abs(100 - (sum + mushroom[n]))) {
			sum += mushroom[n];
		}
		else {
			sum += mushroom[n];
			break;
		}
	}
	cout << sum << endl;
	return 0;
}