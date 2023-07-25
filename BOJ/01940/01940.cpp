#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int N, M, *arr, cnt = 0, value;
	cin >> N >> M;
	arr = new int[N];
	for (int n = 0; n < N; n++)
		cin >> arr[n];
	sort(arr, arr + N);
	for (int n = 0; n < N; n++) {
		value = M - arr[n];
		for (int m = N - 1; m > n; m--) {
			if (value == arr[m]) {
				cnt++;
				break;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}