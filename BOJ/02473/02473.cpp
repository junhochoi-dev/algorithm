#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define endl '\n'
#define INF 3000000000 + 1
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//freopen("input.txt", "r", stdin);

	int sz, val, arr[3];
	long long minSum = INF;
	vector<long long> vt;

	cin >> sz;
	for (int n = 0; n < sz; n++) {
		cin >> val;
		vt.push_back(val);
	}
	sort(vt.begin(), vt.end());
	bool findZero = false;
	for (int idx = 0; idx < sz; idx++) {
		int left = 0, right = sz - 1;
		while (left < right && !findZero) {
			if (left == idx) {
				left++;
				continue;
			}
			if (right == idx) {
				right--;
				continue;
			}
			long long sum = vt[left] + vt[right] + vt[idx];
			if (abs(sum) < minSum) {
				arr[0] = vt[left];
				arr[1] = vt[right];
				arr[2] = vt[idx];
				minSum = abs(sum);
				//cout << abs(sum) << ' ';
				//for (int n = 0; n < 3; n++) cout << arr[n] << ' ';
				//cout << endl;
				if (minSum == 0) {
					findZero = true;
					break;
				}
			}
			if (sum < 0) left++;
			if (sum > 0) right--;
		}
		if (findZero) break;
	}
	sort(arr, arr + 3);
	for (int n = 0; n < 3; n++) cout << arr[n] << ' ';
	cout << endl;
	return 0;
}