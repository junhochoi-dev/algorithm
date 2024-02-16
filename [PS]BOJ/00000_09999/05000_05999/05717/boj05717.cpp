#include <iostream>
using namespace std;
int main() {
	int GF, BF;
	while (true) {
		cin >> GF >> BF;
		if (GF == 0 && BF == 0)
			break;
		cout << GF + BF << endl;
	}
	return 0;
}