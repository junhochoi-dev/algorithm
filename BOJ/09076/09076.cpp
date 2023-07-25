#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int arr[5], test_case;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		for(int m = 0 ; m < 5; m++)
			cin >> arr[m];
		sort(arr, arr + 5);
		if (arr[3] - arr[1] >= 4)
			cout << "KIN" << endl;
		else
			cout << arr[1] + arr[2] + arr[3] << endl;
	}
	return 0;
}