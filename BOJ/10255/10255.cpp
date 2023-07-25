#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
#define endl '\n'
#define EPSILON 0.000001
long long ccw(int x1, int y1, int x2, int y2, int x3, int y3) {
	return (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
	// ccw > 0 -> counterclockwise
	// ccw < 0 -> clockwise
	// ccw = 0 -> parallel
}
double distance(int x1, int y1, int x2, int y2) {
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
bool compare(double a, double b, double c) {
	if (abs(a + b - c) < EPSILON) return true;
	return false;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// freopen("input.txt", "r", stdin);
	int sz;
	int xmin, ymin, xmax, ymax;
	int x1, x2, y1, y2, x3, y3, x4, y4;
	cin >> sz;
	while (sz--) {
		cin >> xmin >> ymin >> xmax >> ymax;
		cin >> x1 >> y1 >> x2 >> y2;
		int dx[] = { xmin, xmin, xmin, xmax, xmin, xmax, xmax, xmax };
		int dy[] = { ymin, ymax, ymin, ymin, ymax, ymax, ymin, ymax };
		int cnt = 0, edge = 0;
		long long ccw1, ccw2, ccw3, ccw4;
		for (int k = 0; k < 8; k += 2) {
			x3 = dx[k];
			y3 = dy[k];
			x4 = dx[k + 1];
			y4 = dy[k + 1];

			ccw1 = ccw(x1, y1, x2, y2, x3, y3);
			ccw2 = ccw(x1, y1, x2, y2, x4, y4);

			ccw3 = ccw(x3, y3, x4, y4, x1, y1);
			ccw4 = ccw(x3, y3, x4, y4, x2, y2);

			if (x1 == x3 && y1 == y3 && x2 == x4 && y2 == y4) {
				cnt = 4;
				edge = 0;
				break;
			}
			if (x1 == x4 && y1 == y4 && x2 == x3 && y2 == y3) {
				cnt = 4;
				edge = 0;
				break;
			}
			if (ccw1 == 0 && ccw2 == 0) { // parallel
				if (x3 == x4) { // vertical
					if ((y3 < y2 && y2 < y4) || (y3 < y1 && y1 < y4) || (y1 <= y3 && y2 >= y4) || (y2 <= y3 && y1 >= y4)) {
						cnt = 4;
						edge = 0;
						break;
					}
					if ((y2 == y3) || (y1 == y4)) {
						cnt++;
						edge++;
					}
				}
				if (y3 == y4) { // horizontal
					if ((x3 < x2 && x2 < x4) || (x3 < x1 && x1 < x4) || (x1 <= x3 && x2 >= x4) || (x2 <= x3 && x1 >= x4)) {
						cnt = 4;
						edge = 0;
						break;
					}
					if ((x2 == x3) || (x1 == x4)) {
						cnt++;
						edge++;
					}
				}
			}
			else if ((ccw1 != 0 && ccw2 == 0) || (ccw1 == 0 && ccw2 != 0)) {
				if (ccw1 == 0) {
					if ((x1 == x3 && y1 == y3) || (x2 == x3 && y2 == y3)) {
						edge++;
						cnt++;
					}
					else if (compare(distance(x1, y1, x3, y3), distance(x2, y2, x3, y3), distance(x1, y1, x2, y2))) {
						edge++;
						cnt++;
					}
				}
				if (ccw2 == 0) {
					if ((x1 == x4 && y1 == y4) || (x2 == x4 && y2 == y4)) {
						edge++;
						cnt++;
					}
					else if (compare(distance(x1, y1, x4, y4), distance(x2, y2, x4, y4), distance(x1, y1, x2, y2))) {
						edge++;
						cnt++;
					}
				}
			}
			else if (ccw3 == 0 || ccw4 == 0) {
				if (ccw3 == 0) {
					if ((x1 == x3 && y1 == y3) || (x1 == x4 && y1 == y4)) {
						cnt++;
						edge++;
					}
					else if (compare(distance(x1, y1, x3, y3), distance(x1, y1, x4, y4), distance(x3, y3, x4, y4))) {
						cnt++;
					}
				}
				if (ccw4 == 0) {
					if ((x2 == x3 && y2 == y3) || (x2 == x4 && y2 == y4)) {
						cnt++;
						edge++;
					}
					else if (compare(distance(x2, y2, x3, y3), distance(x2, y2, x4, y4), distance(x3, y3, x4, y4))) {
						cnt++;
					}
				}
			}
			else { // ccw1 != 0 && ccw2 != 0
				if (ccw1 * ccw2 < 0 && ccw3 * ccw4 < 0) cnt++;
			}
		}
		if (edge == 4 || edge == 2) cnt -= edge / 2;
		cout << cnt << endl;
	}
	return 0;
}
// Ctrl + Alt + N with input.txt

// Ctrl + Alt + C -> compile
// Ctrl + Alt + R -> execute