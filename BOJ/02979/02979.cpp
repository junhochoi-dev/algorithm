#include <iostream>
using namespace std;
int main() {
	int A, B, C, arr[101] = { 0 }, sum = 0;
	int begin, end;
	cin >> A >> B >> C;
	for (int n = 0; n < 3; n++) {
		cin >> begin >> end;
		for (int m = begin + 1; m <= end; m++) {
			arr[m]++;
		}
	}
	for (int n = 1; n <= 100; n++) {
		switch (arr[n]) {
		case 1:
			sum += A;
			break;
		case 2:
			sum += B * 2;
			break;
		case 3:
			sum += C * 3;
			break;
		}
	}
	cout << sum << endl;
	return 0;
}