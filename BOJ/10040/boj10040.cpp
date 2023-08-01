#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	int game, executor, *arr, *exec, *score, top, idx;
	cin >> game >> executor;

	score = new int[game];
	memset(score, 0, sizeof(int) * game);
	arr = new int[game];
	exec = new int[executor];

	for (int n = 0; n < game; n++)
		cin >> arr[n];
	for (int n = 0; n < executor; n++)
		cin >> exec[n];

	for (int n = 0; n < executor; n++) {
		top = 100000;
		for (int m = 0; m < game; m++) {
			if ((exec[n] - arr[m] >= 0) && (exec[n] - arr[m] < top)) {
				top = exec[n] - arr[m];
				idx = m;
				break;
			}
		}
		score[idx]++;
	}
	for (int n = 0; n < game; n++) {
		if (*max_element(score, score + game) == score[n])
			idx = n;
	}
	cout << idx + 1 << endl;
	return 0;
}