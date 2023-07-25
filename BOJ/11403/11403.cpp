#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define endl '\n'
#define INF 987654321
#define MAXSIZE 101
int dis[MAXSIZE][MAXSIZE];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int size;
	cin >> size;
	for (int n = 0; n < size; n++) {
		for (int m = 0; m < size; m++) {
			cin >> dis[n][m];
		}
	}
	for (int k = 0; k < size; k++) {
		for (int n = 0; n < size; n++) {
			for (int m = 0; m < size; m++) {
				if (dis[n][m] == 1) continue;
				if (dis[n][k] + dis[k][m] == 2) dis[n][m] = 1;
			}
		}
	}

	for (int n = 0; n < size; n++) {
		for (int m = 0; m < size; m++) {
			cout << dis[n][m] << ' ';
		}
		cout << endl;
	}
	return 0;
}