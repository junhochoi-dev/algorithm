#include <iostream>
using namespace std;
int main() {
	int in, out, sum = 0, max = 0;
	for (int n = 0; n < 10; n++) {
		cin >> out >> in;
		sum -= out;
		sum += in;
		if (max < sum)
			max = sum;
	}
	cout << max << endl;
	return 0;
}