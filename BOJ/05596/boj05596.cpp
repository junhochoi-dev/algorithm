#include <iostream>
using namespace std;
int main() {
	int score;
	int Min = 0, Man = 0;
	for (int n = 0; n < 4; n++) {
		cin >> score;
		Min += score;
	}
	for (int n = 0; n < 4; n++) {
		cin >> score;
		Man += score;
	}
	cout << (Min > Man ? Min : Man) << endl;
	return 0;
}