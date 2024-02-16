#include <iostream>
using namespace std;
int main() {
	int count, cup1, cup2, location = 1;
	cin >> count;
	for (int n = 0; n < count; n++) {
		cin >> cup1 >> cup2;
		if (cup1 == cup2)
			continue;
		if (cup1 == location)
			location = cup2;
		else if (cup2 == location)
			location = cup1;
	}
	if (!(location == 1 || location == 2 || location == 3))
		cout << "-1" << endl;
	else
		cout << location << endl;
	return 0;
}