#include <iostream>
#include <string>
#include <deque>
using namespace std;
int main() {
	int size_order, value;
	deque<int> dq;
	string order;

	cin >> size_order;
	cin.ignore();
	for (int n = 0; n < size_order; n++) {
		cin >> order;
		if (order == "push_front") {
			cin >> value;
			dq.push_front(value);
			cin.ignore();
		}
		else if (order == "push_back") {
			cin >> value;
			dq.push_back(value);
			cin.ignore();
		}
		else if (order == "pop_front") {
			if (!dq.empty()) {
				cout << dq.front() << endl;
				dq.pop_front();
			}
			else {
				cout << -1 << endl;
			}
		}
		else if (order == "pop_back") {
			if (!dq.empty()) {
				cout << dq.back() << endl;
				dq.pop_back();
			}
			else {
				cout << -1 << endl;
			}
		}
		else if (order == "size") {
			cout << dq.size() << endl;
		}
		else if (order == "empty") {
			cout << (dq.empty() ? 1 : 0) << endl;
		}
		else if (order == "front") {
			if (!dq.empty())
				cout << dq.front() << endl;
			else
				cout << -1 << endl;
		}
		else if (order == "back") {
			if (!dq.empty())
				cout << dq.back() << endl;
			else
				cout << -1 << endl;
		}
	}



	return 0;
}