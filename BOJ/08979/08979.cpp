#include <iostream>
#include <vector>
using namespace std;
int main() {
	int size, index, c[1000][4], G, S, B, rank = 1;
	cin >> size >> index;
	for (int n = 0; n < size; n++) {
		cin >> c[n][0] >> c[n][1] >> c[n][2] >> c[n][3];
		if (c[n][0] == index) {
			G = c[n][1];
			S = c[n][2]; 
			B = c[n][3];
		}
	}
	for (int n = 0; n < size; n++) {
		if (c[n][0] != index) {
			if (G < c[n][1])
				rank++;
			else if(G == c[n][1] && S < c[n][2])
				rank++;
			else if (G == c[n][1] && S == c[n][2] && B < c[n][3])
				rank++;
		}
	}
	cout << rank << endl;
	return 0;
}