#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
double distance(int x1, int y1, int x2, int y2) {
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
int main(void) {
	int x1, x2, x3;
	int y1, y2, y3;
	double g1, g2, g3, ans;
	cout.precision(10);
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	if ((x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1) == 0) {
		cout << "-1" << endl;
		return 0;
	}
	g1 = distance(x1, y1, x2, y2);
	g2 = distance(x2, y2, x3, y3);
	g3 = distance(x3, y3, x1, y1);
	ans = max(g1 + g2, max(g2 + g3, g3 + g1)) - min(g1 + g2, min(g2 + g3, g3 + g1));
	cout << 2 * ans << endl;
	return 0;
}