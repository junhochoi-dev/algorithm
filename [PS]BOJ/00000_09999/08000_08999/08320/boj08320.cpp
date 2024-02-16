#include <iostream>
using namespace std;
int rect(int num) {
	int cnt = 0;
	for (int n = 1; n <= num; n++)
		if (num % n == 0)
			cnt++;
	if (cnt % 2 == 0)
		return cnt / 2;
	else
		return cnt / 2 + 1;
}
int main() {
	int num, sum = 0;
	cin >> num;
	for (int n = 1; n <= num; n++) {
		sum += rect(n);
	}
	cout << sum << endl;
	return 0;
}