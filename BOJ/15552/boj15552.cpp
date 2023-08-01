#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int count, a, b;
	cin >> count;
	for (int n = 0; n < count; n++) {
		cin >> a >> b;
		cout << a + b << '\n';
	}
	return 0;
}