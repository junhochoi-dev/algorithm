#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	int arr[4] = { 1,2,3,4 };
	string str;
	cin >> str;
	for (int n = 0; n < str.size(); n++) {
		switch (str[n]) {
		case 'A':
			swap(arr[0], arr[1]);
			break;
		case 'B':
			swap(arr[0], arr[2]);
			break;
		case 'C':
			swap(arr[0], arr[3]);
			break;
		case 'D':
			swap(arr[1], arr[2]);
			break;
		case 'E':
			swap(arr[1], arr[3]);
			break;
		case 'F':
			swap(arr[2], arr[3]);
			break;
		}
	}
	for (int n = 0; n < 4; n++) {
		if (arr[n] == 1)
			cout << n + 1 << endl;
	}
	for (int n = 0; n < 4; n++) {
		if (arr[n] == 4)
			cout << n + 1 << endl;
	}
	return 0;
}