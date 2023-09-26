#include <iostream>
using namespace std;
int main() {
	int N, T, C, P;
	cin >> N >> T >> C >> P;
	cout << ((N - 1) / T) * C * P << endl;
	return 0;
}