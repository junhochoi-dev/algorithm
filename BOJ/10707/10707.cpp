#include <iostream>
using namespace std;
int main() {
	int A, B, C, D, P, X, Y;
	cin >> A >> B >> C >> D >> P;
	X = P * A;
	if (P > C)
		Y = B + D * (P - C);
	else
		Y = B;
	cout << (X > Y ? Y : X) << endl;
	return 0;
}