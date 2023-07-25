#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int *card;
	int M, size, max = 0, sum;
	cin >> size >> M;
	card = new int[size];
	for (int n = 0; n < size; n++)
		cin >> card[n];
	for (int n = 0; n < size; n++) {
		for (int m = 0; m < size; m++) {
			if (m == n)
				continue;
			for (int j = 0; j < size; j++) {
				if (j == m || j == n)
					continue;
				sum = card[n] + card[m] + card[j];
				if (M == sum) {
					cout << M;
					return 0;
				}
				if (max < sum && sum <= M)
					max = sum;
			}
		}
	}
	cout << max << endl;
}