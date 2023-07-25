#include <iostream>
using namespace std;
int main() {
	int num, divide;
	cin >> divide;
	while (true) {
		cin >> num;
		if (num == 0)
			break;
		if (num % divide == 0)
			cout << num << " is a multiple of " << divide << "." << endl;
		else
			cout << num << " is NOT a multiple of " << divide << "." << endl;
	}
	return 0;
}