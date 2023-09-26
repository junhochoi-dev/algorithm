#include <iostream>
using namespace std;
int main() {
	int size, A = 0, B = 0;
	char ch;
	cin >> size;
	for (int n = 0; n < size; n++) {
		cin >> ch;
		if (ch == 'A')
			A++;
		if (ch == 'B')
			B++;
	}
	if (A > B)
		cout << 'A' << endl;
	else if (A < B)
		cout << 'B' << endl;
	else
		cout << "Tie" << endl;
	return 0;
}