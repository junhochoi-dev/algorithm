#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define DICE 6
int main() {
	long long N, dice[6], sum6 = 0, g[3];
	long long  g1, g2, g3, min3, min2, min1, sum = 0;

	cin >> N;
	for (int n = 0; n < DICE; n++) {
		cin >> dice[n];
		sum6 += dice[n];
	}
	if (N == 1) {
		cout << sum6 - *max_element(dice, dice + DICE) << endl;
		return 0;
	}
	g[0] = min(dice[0], dice[5]);
	g[1] = min(dice[1], dice[4]);
	g[2] = min(dice[2], dice[3]);
	sort(g, g + 3);
	min3 = g[0] + g[1] + g[2];
	min2 = g[0] + g[1];
	min1 = g[0];

	sum += min3 * 4;
	sum += min2 * ((N - 1) * 4 + (N - 2) * 4);
	sum += min1 * ((N - 2) * (N - 1) * 4 + (N - 2) * (N - 2));

	cout << sum << endl;
	return 0;
}