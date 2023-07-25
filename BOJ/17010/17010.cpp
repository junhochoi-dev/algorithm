#include <iostream>
using namespace std;
int main() {
	int size, count;
	cin >> size;
	char ch;
	for (int n = 0; n < size; n++) {
		cin >> count >> ch;
		for (int m = 0; m < count; m++)
			cout << ch;
		cout << endl;
	}
	return 0;
}