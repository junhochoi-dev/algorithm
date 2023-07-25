#include <iostream>
using namespace std;
int main() {
	int test_case, size, K, candy, sum;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> size >> K;
		sum = 0;
		for (int m = 0; m < size; m++) {
			cin >> candy;
			sum += candy / K;
		}
		cout << sum << endl;
	}
	return 0;
}