#include <iostream>
using namespace std;
int main() {
	int count;
	int changyoung = 100, sangduck = 100, c, s;
	cin >> count;
	for (int n = 0; n < count; n++) {
		cin >> c >> s;
		if (c > s)
			sangduck -= c;
		else if (s > c)
			changyoung -= s;
	}
	cout << changyoung << endl << sangduck << endl;
	return 0;
}