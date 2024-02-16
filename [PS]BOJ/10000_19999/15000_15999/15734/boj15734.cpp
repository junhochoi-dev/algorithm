#include <iostream>
using namespace std;
int main() {
	int L, R, A, count = 0;
	cin >> L >> R >> A;
	if (L > R) {
		count += R * 2;
		L -= R;
		if (L >= A)
			count += A * 2;
		else {
			count += L * 2;
			A -= L;
			count += A / 2 * 2;
		}
	}
	else if (R > L) {
		count += L * 2;
		R -= L;
		if (R >= A)
			count += A * 2;
		else {
			count += R * 2;
			A -= R;
			count += A / 2 * 2;
		}
	}
	else
		count += L + R + A / 2 * 2;
	cout << count << endl;
	return 0;
}