#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long long A, B;
	cin >> A >> B;
	cout << ((A + B) * (abs(A - B) + 1)) / 2 << endl;
	return 0;
}