#include <iostream>
using namespace std;
int main() {
	long long n;
	cin >> n;
	cout << ((long long)(1.5 * n* n + 2.5*n + 1)) % 45678 << endl;
	return 0;
}