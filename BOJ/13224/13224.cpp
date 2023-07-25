#include <iostream>
using namespace std;
int main() {
	int first = 1, second = 0, third = 0, temp;
	string order;
	cin >> order;
	for (int n = 0; n < order.size(); n++) {
		switch (order[n]) {
		case 'A':
			temp = first;
			first = second;
			second = temp;
			break;
		case 'B':
			temp = second;
			second = third;
			third = temp;
			break;
		case 'C':
			temp = first;
			first = third;
			third = temp;
			break;
		}
	}
	if (first == 1)
		cout << 1 << endl;
	else if (second == 1)
		cout << 2 << endl;
	else
		cout << 3 << endl;
	return 0;
}