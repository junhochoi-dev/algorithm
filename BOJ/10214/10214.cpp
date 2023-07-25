#include <iostream>
using namespace std;
int main() {
	int count, K, Y, Korea, Yonsei;
	cin >> count;
	for (int n = 0; n < count; n++) {
		Korea = Yonsei = 0;
		for (int m = 0; m < 9; m++) {
			cin >> Y >> K;
			Korea += K;
			Yonsei += Y;
		}
		if (Korea > Yonsei)
			cout << "Korea" << endl;
		else if (Korea < Yonsei)
			cout << "Yonsei" << endl;
		else
			cout << "Draw" << endl;
	}
	return 0;
}