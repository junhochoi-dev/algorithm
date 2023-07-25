#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int A, B, C, D;
	cin >> A >> B;
	cin >> C >> D;
	cout << min(A + D, B + C) << endl;

	return 0;
}