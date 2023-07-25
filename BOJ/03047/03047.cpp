#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(void) {
	int arr[3];
	string str;
	for (int n = 0; n < 3; n++)
		cin >> arr[n];
	sort(arr, arr + 3);
	cin.ignore();
	cin >> str;
	for (int n = 0; n < 3; n++)
		cout << arr[str[n] - 'A'] << ' ';
	cout << endl;
	return 0;
}