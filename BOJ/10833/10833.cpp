#include <iostream>
using namespace std;
int main() {
	int test_case, apples, students, sum = 0;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> students >> apples;
		sum += apples % students;
	}
	cout << sum << endl;
	return 0;
}