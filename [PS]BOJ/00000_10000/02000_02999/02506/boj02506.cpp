#include <iostream>
using namespace std;
int main() {
	int test_count, score = 1, sum = 0;
	cin >> test_count;
	int* arr = new int[test_count];
	for (int n = 0; n < test_count; n++)
		cin >> arr[n];
	for (int n = 0; n < test_count; n++) {
		if (arr[n] == 1)
			sum += arr[n] * score;
		if (arr[n] == 1 && arr[n + 1] == 1)
			score++;
		else
			score = 1;
	}
	cout << sum << endl;
	return 0;
}