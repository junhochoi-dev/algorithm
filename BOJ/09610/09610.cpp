#include <iostream>
using namespace std;
int main() {
	int size, x, y, q1, q2, q3, q4, axis = 0;
	q1 = q2 = q3 = q4 = 0;
	cin >> size;
	for (int n = 0; n < size; n++) {
		cin >> x >> y;
		if (x == 0 || y == 0)
			axis++;
		else if (x > 0 && y > 0)
			q1++;
		else if (x < 0 && y > 0)
			q2++;
		else if (x < 0 && y < 0)
			q3++;
		else if (x > 0 && y < 0)
			q4++;
	}
	cout << "Q1: " << q1 << endl;
	cout << "Q2: " << q2 << endl;
	cout << "Q3: " << q3 << endl;
	cout << "Q4: " << q4 << endl;
	cout << "AXIS: " << axis << endl;
	return 0;
}