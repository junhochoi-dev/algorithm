#include <iostream>
using namespace std;
int main() {
	int time = 0;
	string dial;
	cin >> dial;
	for (int n = 0; n < dial.size(); n++) {
		if ('A' <= dial[n] && dial[n] <= 'C')
			time += 3;
		else if ('D' <= dial[n] && dial[n] <= 'F')
			time += 4;
		else if ('G' <= dial[n] && dial[n] <= 'I')
			time += 5;
		else if ('J' <= dial[n] && dial[n] <= 'L')
			time += 6;
		else if ('M' <= dial[n] && dial[n] <= 'O')
			time += 7;
		else if ('P' <= dial[n] && dial[n] <= 'S')
			time += 8;
		else if ('T' <= dial[n] && dial[n] <= 'V')
			time += 9;
		else if ('W' <= dial[n] && dial[n] <= 'Z')
			time += 10;
	}
	cout << time << endl;

	return 0;
}