#include <iostream>
using namespace std;
int main() {
	int size, *arr, count = 0;
	bool check;
	cin >> size;
	arr = new int[size];
	for (int n = 0; n < size; n++) {
		cin >> arr[n];
		if (arr[n] == 1)
			continue;
		check = true;
		for (int m = 2; m < arr[n]; m++) {
			if (arr[n] % m == 0)
				check = false;
		}
		if (check == true)
			count++;
	}
	cout << count << endl;
	return 0;
}