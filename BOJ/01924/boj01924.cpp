#include <iostream>
using namespace std;
int main() {
	int month, day, sumday = 0;
	cin >> month >> day;
	switch (month) {
	case 1:
		break;
	case 2:
		sumday += 31;
		break;
	case 3:
		sumday += 31 + 28;
		break;
	case 4:
		sumday += 31 + 28 + 31;
		break;
	case 5:
		sumday += 31 + 28 + 31 + 30;
		break;
	case 6:
		sumday += 31 + 28 + 31 + 30 + 31;
		break;
	case 7:
		sumday += 31 + 28 + 31 + 30 + 31 + 30;
		break;
	case 8:
		sumday += 31 + 28 + 31 + 30 + 31 + 30 + 31;
		break;
	case 9:
		sumday += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
		break;
	case 10:
		sumday += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
		break;
	case 11:
		sumday += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
		break;
	case 12:
		sumday += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
		break;
	}
	sumday += day;
	switch (sumday % 7) {
	case 0:
		cout << "SUN" << endl;
		break;
	case 1:
		cout << "MON" << endl;
		break;
	case 2:
		cout << "TUE" << endl;
		break;
	case 3:
		cout << "WED" << endl;
		break;
	case 4:
		cout << "THU" << endl;
		break;
	case 5:
		cout << "FRI" << endl;
		break;
	case 6:
		cout << "SAT" << endl;
		break;
	}
	return 0;
}