#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
#define endl '\n'

bool isPN(int x) {
	for (int n = 2; n * n <= x; n++) {
		if (x % n == 0)
			return false;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int> pn;
	vector<int> pn_sum;
	// freopen("input.txt", "r", stdin);

	int x;
	cin >> x;
	for (int n = 2; n <= x; n++) {
		if (isPN(n)) {
			pn.push_back(n);
			if (pn_sum.empty()) pn_sum.push_back(n);
			else pn_sum.push_back(pn_sum.back() + n);
		}
	}

	//for (int n = 0; n < pn.size(); n++) cout << pn[n] << '	';
	//cout << endl;
	//for (int n = 0; n < pn_sum.size(); n++) cout << pn_sum[n] << '	';
	//cout << endl;

	int left = 0, right = 0, cnt = 0;
	while (left <= right && left < pn.size() && right < pn.size()) {
		int sum = pn_sum[right] - pn_sum[left] + pn[left];
		// cout << left << ' ' << right << " sum: " << sum << " cnt: " << cnt << endl;
		if (x > sum) right++;
		else if (x < sum) left++;
		else {
			left++;
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}