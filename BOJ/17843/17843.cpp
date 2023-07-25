#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cout << fixed;
	cout.precision(6);
	int hour, min, sec, test_case;
	double OA, OB, OC, arr[3];
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> hour >> min >> sec;
		OC = sec * 6;
		OB = min * 6 + sec * 0.1;
		OA = hour * 30 + min * 0.5 + sec / 120.0;
		arr[0] = abs(OA - OB) > 180 ? 360 - abs(OA - OB) : abs(OA - OB);
		arr[1] = abs(OB - OC) > 180 ? 360 - abs(OB - OC) : abs(OB - OC);
		arr[2] = abs(OC - OA) > 180 ? 360 - abs(OC - OA) : abs(OC - OA);
		cout << *min_element(arr, arr + 3) << endl;
	}
	return 0;
}