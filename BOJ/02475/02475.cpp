#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int num, sum = 0;
	for (int n = 0; n < 5; n++) {
		cin >> num;
		sum += pow(num,2);
	}
	cout << sum % 10 << endl;
	return 0;
}