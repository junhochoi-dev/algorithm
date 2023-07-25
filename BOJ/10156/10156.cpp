#include <iostream>
using namespace std;
int main() {
	int K, N, M;
	cin >> K >> N >> M;
	if (K * N <= M)
		cout << 0 << endl;
	else
		cout << K * N - M << endl;
	return 0;
}