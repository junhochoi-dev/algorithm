#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int size, game, *player, *target, point;
	cin >> size >> game;
	player = new int[size];
	target = new int[game];
	for (int n = 0; n < game; n++) {
		cin >> target[n];
	}
	memset(player, 0, sizeof(int) * size);
	for (int n = 0; n < game; n++) {
		for (int m = 0; m < size; m++) {
			cin >> point;
			if (point == target[n])
				player[m]++;
			else
				player[target[n] - 1]++;
		}
	}
	for (int n = 0; n < size; n++) {
		cout << player[n] << endl;
	}
	return 0;
}