#include <iostream>
using namespace std;
int main() {
	int num, ans, sum = 0;
	cin >> num;
	for (int n = 0; n < 5; n++) {
		cin >> ans;
		if (ans == num)
			sum++;
	}
	cout << sum << endl;
	return 0;
}