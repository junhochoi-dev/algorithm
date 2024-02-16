#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int num, sum = 0;
	vector<int> v, *p;
	for (int n = 0; n < 8; n++) {
		cin >> num;
		v.push_back(num);
	}
	for (int n = 0; n < 8; n++) {
		sum = max(sum, v[0] + v[1] + v[2] + v[3]);
		num = v.front();

		for (int m = 1; m < 8; m++) {
			v[m - 1] = v[m];
		}
		v[7] = num;
	}
	cout << sum << endl;
	return 0;
}
