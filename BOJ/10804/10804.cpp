#include <iostream>
#include <algorithm>
using namespace std;
#define SIZE 20
int main() {
	int start, end, index;
	int arr[21] = { 0,1,2,3,4,5,6,7,8,9,10,
		11,12,13,14,15,16,17,18,19,20 };
	for (int n = 0; n < 10; n++) {
		cin >> start >> end;
		for (int m = start, i = 0; m < (start + end + 1) / 2; m++, i++)
			swap(arr[m], arr[end - i]);
	}
	for (int n = 1; n < 21; n++)
		cout << arr[n] << ' ';
	return 0;
}