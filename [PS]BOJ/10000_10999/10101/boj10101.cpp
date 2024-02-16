#include <iostream>
using namespace std;
int main() {
	int side[3], sum = 0;
	for (int n = 0; n < 3; n++) {
		cin >> side[n];
		sum += side[n];
	}
	if (sum != 180)
		cout << "Error" << endl;
	else if (side[0] == side[1] && side[1] == side[2])
		cout << "Equilateral" << endl;
	else if (side[0] != side[1] && side[1] != side[2] && side[2] != side[0])
		cout << "Scalene" << endl;
	else
		cout << "Isosceles" << endl;
	return 0;
}
