#include <iostream>
using namespace std;
int main() {
	int A, B;
	cin >> A >> B;
	cout << A / B;
	if (A % B == 0) {
		return 0;
	}
	cout << '.';
	for (int n = 0; n < 1000; n++) {
		if (A % B == 0)
			break;
		A = (A % B) * 10;
		cout << A / B;
		
	}
	return 0;
}