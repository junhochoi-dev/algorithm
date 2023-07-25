#include <iostream>
using namespace std;
int main() {
	int team1[9], team2[9], team1sum, team2sum;
	for (int n = 0; n < 9; n++)
		cin >> team1[n];
	for (int n = 0; n < 9; n++)
		cin >> team2[n];

	team1sum = team2sum = 0;
	for (int n = 0; n < 9; n++) {
		team1sum += team1[n];
		if (team1sum > team2sum) {
			cout << "Yes" << endl;
			return 0;
		}
		team2sum += team2[n];
	}
	cout << "No" << endl;

	return 0;
}