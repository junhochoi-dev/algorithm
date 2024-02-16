#include <iostream>
#include <string>
using namespace std;
int main() {
	int arr[30] = {0}, num;
	for (int n = 0; n < 28; n++) {
		cin >> num;
		arr[num - 1]++;
	}
	for (int n = 0; n < 30; n++) {
		if (arr[n] == 0)
			cout << n + 1 << endl;
	}
	return 0;
}