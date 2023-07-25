#include <iostream>
using namespace std;
int main(void) {
	int x1, x2, x3;
	int y1, y2, y3;
	int x, y;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	if (x1 == x2 && x2 != x3)
		x = x3;
	else if (x2 == x3 && x1 != x2)
		x = x1;
	else if (x1 == x3 && x1 != x2)
		x = x2;
	if (y1 == y2 && y2 != y3)
		y = y3;
	else if (y2 == y3 && y1 != y2)
		y = y1;
	else if (y1 == y3 && y1 != y2)
		y = y2;
	cout << x << ' ' << y << endl;
	return 0;
}