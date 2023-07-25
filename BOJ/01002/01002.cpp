#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int count, x1, x2, y1, y2, output;
	double r1, r2, distance;

	cin >> count; // input testcase count

	for (int n = 0; n < count; n++) {
		cin >> x1 >> y1 >> r1;
		cin >> x2 >> y2 >> r2; // input coordinates and radius
		distance = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
		
		if (distance > r1 + r2)
			output = 0;
		else if (distance == r1 + r2)
			output = 1;
		else if (distance < r1 + r2) {
			if (abs(r1 - r2) == distance)
				output = 1;
			else if (abs(r1 - r2) > distance)
				output = 0;
			else
				output = 2;
		}
		if (x1 == x2 && y1 == y2 && r1 == r2)
			output = -1;
		else if (x1 == x2 && y1 == y2 && r1 != r2)
			output = 0;
		cout << output << endl; // output testcase
	}

	return 0;
}