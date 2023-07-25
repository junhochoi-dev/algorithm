#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int size, W, H, matches;
	double mx;
	cin >> size >> W >> H;
	mx = sqrt(W * W + H * H);
	for (int n = 0; n < size; n++) {
		cin >> matches;
		if (matches <= mx)
			cout << "DA" << endl;
		else
			cout << "NE" << endl;
	}
	return 0;
}