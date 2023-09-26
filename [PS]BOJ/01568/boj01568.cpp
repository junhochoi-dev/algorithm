#include <iostream>
using namespace std;
int main() {
	int bird, count = 0, temp;
	cin >> bird;
	temp = bird;
	for (int n = 1; n <= bird; n++) {
		if (n > temp) {
			n = 1 ;
		}
		count++;
		temp -= n;
		if (temp == 0)
			break;
	}
	space:
	cout << count << endl;
	return 0;
}