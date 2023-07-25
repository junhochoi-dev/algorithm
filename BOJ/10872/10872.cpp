#include <iostream>
using namespace std;
int main() {
	int num, sum = 1;
	cin >> num;
	for (int n = 1; n <= num; n++) {
		sum *= n;
	}
	cout << sum << endl;
	return 0;
}