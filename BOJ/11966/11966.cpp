#include <iostream>
using namespace std;
int main() {
	int num;
	bool check = true;
	cin >> num;
	while (true) {
		if (num == 1)
			break;
		if (num % 2 == 0)
			num /= 2;
		else {
			check = false;
			break;
		}
	}
	cout << check << endl;
	return 0;
}