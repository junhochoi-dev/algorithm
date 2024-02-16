#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int count;
	string order;
	vector<int> vec;
	cin >> count;
	cin.ignore();
	for (int n = 0; n < count; n++) {
		getline(cin, order);
		if (order.rfind(' ') == string::npos) {
			if (order == "pop") {
				if (vec.empty())
					cout << "-1" << endl;
				else {
					cout << vec.back() << endl;
					vec.pop_back();
				}
			}
			else if (order == "size") {
				cout << vec.size() << endl;
			}
			else if (order == "empty") {
				if (vec.empty())
					cout << "1" << endl;
				else
					cout << "0" << endl;
			}
			else if (order == "top") {
				if (vec.empty())
					cout << "-1" << endl;
				else {
					cout << vec.back() << endl;
				}
			}
		}
		else
			vec.push_back(stoi(order.substr(4, order.size() - 4)));
		cin.clear();
	}

	return 0;
}