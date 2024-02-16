#include <iostream>
using namespace std;
int main() {
	int size, *arr, v, cnt = 0;
	cin >> size;
	arr = new int[size];
	for (int n = 0; n < size; n++)
		cin >> arr[n];
	cin >> v;
	for (int n = 0; n < size; n++)
		if (v == arr[n])
			cnt++;
	cout << cnt << endl;
	return 0;
}
