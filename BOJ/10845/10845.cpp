#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main() {
	int test_case, num;
	queue<int> q;
	string order;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> order;
		if (order == "push") {
			cin >> num;
			q.push(num);
		}
		else if (order == "pop") {
			if (q.empty())
				cout << -1 << endl;
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (order == "size") {
			cout << q.size() << endl;
		}
		else if (order == "empty") {
			if (q.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (order == "front") {
			if (q.empty())
				cout << -1 << endl;
			else
				cout << q.front() << endl;
		}
		else if (order == "back") {
			if (q.empty())
				cout << -1 << endl;
			else
				cout << q.back() << endl;
		}
	}
	return 0;
}