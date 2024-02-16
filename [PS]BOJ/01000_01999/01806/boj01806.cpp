#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int size, val, start, end, minLength = 987654321;
	long long tmp = 0;
	cin >> size >> val;
	long long *arr = new long long[size];
	long long *sum = new long long[size];
	for (int n = 0; n < size; n++) {
		cin >> arr[n];
		tmp += arr[n];
		sum[n] = tmp;
	}
	start = end = 0;
	while (start <= end && start < size && end < size) {
		tmp = sum[end] - sum[start] + arr[start];
		if (tmp >= val) {
			// cout << start << ' ' << end << ' ' << end - start + 1 << endl;
			minLength = min(minLength, end - start + 1);
			start++;
		}
		else {
			end++;
		}
	}
	if (minLength == 987654321) cout << 0 << endl;
	else cout << minLength << endl;
	return 0;
}