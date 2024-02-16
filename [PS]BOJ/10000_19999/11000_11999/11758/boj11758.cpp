#include <iostream>
using namespace std;
int main(void) {
	int x1, x2, x3;
	int y1, y2, y3, D;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	D = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
	if (D < 0)
		cout << "-1" << endl;
	else if (D > 0)
		cout << "1" << endl;
	else
		cout << "0" << endl;
	return 0;
}