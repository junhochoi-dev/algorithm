#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
#define endl '\n'

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	priority_queue<int> max, min;
	// freopen("input.txt", "r", stdin);

	int sz, val;
	cin >> sz;
	while (sz--) {
		cin >> val;
		if (min.empty() && max.empty()) min.push(val);
		else if (min.size() == max.size()) {
			if (-max.top() < val) {
				min.push(-max.top());
				max.pop();
				max.push(-val);
			}
			else min.push(val);
		}
		else { // min.size() > max.size();
			if (min.top() > val) {
				max.push(-min.top());
				min.pop();
				min.push(val);
			}
			else max.push(-val);
		}
		cout << min.top() << endl;
	}

	return 0;
}