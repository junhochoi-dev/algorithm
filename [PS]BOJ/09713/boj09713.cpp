#include <iostream>
using namespace std;
int main() {
	int size, num, sum = 0;
	cin >> size;
	for (int n = 0; n < size; n++) {
		cin >> num;
		num = (num + 1) / 2;
		cout << num * num << endl;
	}
	return 0;
}