#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int test_case, member, size, *arr, num, sum;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> member >> size;
		arr = new int[size];
		sum = 0;
		memset(arr, 0, sizeof(int) * size);
		for (int m = 0; m < member; m++) {
			cin >> num;
			arr[num - 1]++;
		}
		for (int m = 0; m < size; m++) {
			if (arr[m] > 1)
				sum += arr[m] - 1;
		}
		cout << sum << endl;
	}
	return 0;
}