#include <iostream>
using namespace std;

int main() {
	int count, V, E;
	cin >> count;
	for (int n = 0; n < count; n++) {
		cin >> V >> E;
		cout << E - V + 2 << endl;
	}
	return 0;
}