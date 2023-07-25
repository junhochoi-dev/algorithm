#include <iostream>
using namespace std;
int main() {
	int A[10], B[10], a_sum, b_sum;
	for (int n = 0; n < 10; n++)
		cin >> A[n];
	for (int n = 0; n < 10; n++)
		cin >> B[n];
	a_sum = b_sum = 0;
	for (int n = 0; n < 10; n++) {
		if (A[n] > B[n])
			a_sum++;
		else if (A[n] < B[n])
			b_sum++;
	}
	if (a_sum == b_sum)
		cout << "D" << endl;
	else if (a_sum > b_sum)
		cout << "A" << endl;
	else
		cout << "B" << endl;
	return 0;
}