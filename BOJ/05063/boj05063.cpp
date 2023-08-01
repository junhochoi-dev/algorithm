#include <iostream>
using namespace std;
int main() {
	int r, e, c, size;
	cin >> size;
	for (int n = 0; n < size; n++) {
		cin >> r >> e >> c;
		if (r < e - c)
			cout << "advertise" << endl;
		else if (r > e - c)
			cout << "do not advertise" << endl;
		else
			cout << "does not matter" << endl;
	}
	return 0;
}