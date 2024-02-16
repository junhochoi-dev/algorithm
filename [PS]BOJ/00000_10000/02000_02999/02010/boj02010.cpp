#include <iostream>
using namespace std;
int main() {
	int size, sum = 0, multitap;
	cin >> size;
	for (int n = 0; n < size; n++) {
		cin >> multitap;
		sum += multitap;
	}
	cout << sum - size + 1 << endl;
	return 0;
}