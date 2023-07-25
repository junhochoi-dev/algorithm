#include <iostream>
using namespace std;
int main() {
	int num, A, B;
	cin >> num;
	for (int n = 0; n < num; n++) {
		cin >> A >> B;
		cout << A + B << endl;
	}
	return 0;
}