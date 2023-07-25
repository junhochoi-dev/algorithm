#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	int side[3];
	while (true) {
		for (int n = 0; n < 3; n++)
			cin >> side[n];
		if (side[0] == 0 && side[1] == 0 && side[2] == 0)
			break;
		sort(side, side + 3);
		if (pow(side[2], 2) == pow(side[0], 2) + pow(side[1], 2))
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
	return 0;
}