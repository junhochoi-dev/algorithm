#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int size, *arr, *sum, test_case, start, end;
	cin >> size;
	sum = new int[size + 1];
	arr = new int[size + 1];
	for (int n = 0; n <= size; n++)
		sum[n] = 0;
	cin >> arr[1];
	sum[1] = arr[1];
	for (int n = 2; n <= size;n++) {
		cin >> arr[n];
		sum[n] = arr[n] + sum[n - 1];
	}
	cin >> test_case;
	for (int n = 0; n < test_case;n++) {
		cin >> start >> end;
		cout << sum[end] - sum[start - 1] << '\n';
	}

	return 0;
}