#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	int size, minX = 100, maxX = 0, minY = 100, maxY = 0;
	int x, y;
	cin >> size;
	for (int n = 0; n < size; n++) {
		cin >> x >> y;
		if (minX > x)
			minX = x;
		if (maxX < x)
			maxX = x;
		if (minY > y)
			minY = y;
		if (maxY < y)
			maxY = y;
	}
	cout << pow(max(abs(maxX - minX), abs(maxY - minY)), 2) << endl;
	return 0;
}