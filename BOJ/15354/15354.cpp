#include <iostream>
using namespace std;
int main() {
	int count, group = 0;
	char line[25];
	cin >> count;
	for (int n = 0; n < count; n++)
		cin >> line[n];
	for (int n = 1; n < count; n++) {
		if (line[n] != line[n - 1])
			group++;
	}
	cout << group + 2<< endl;
	return 0;
}