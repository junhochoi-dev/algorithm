#include <iostream>
#include <string>
using namespace std;
int main() {
	int score, sum = 0, bonus = 0, size;
	string str;
	cin >> size;
	cin.ignore();
	cin >> str;
	for (int n = 0; n < size; n++) {
		if (str[n] == 'O') {
			sum += n + 1 + bonus++;
		}
		else
			bonus = 0;
	}
	cout << sum << endl;
	return 0;
}