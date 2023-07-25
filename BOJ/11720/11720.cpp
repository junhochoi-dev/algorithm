#include <iostream>
using namespace std;
int main() {
	char num[100];
	int size, sum = 0;
	cin >> size;
	cin.ignore();
	cin >> num;
	for (int n = 0; n < size; n++) {
		sum += num[n] - '0';
	}
	cout << sum << endl;
	return 0;
}