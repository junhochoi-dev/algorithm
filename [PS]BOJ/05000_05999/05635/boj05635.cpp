#include <iostream>
#include <string>
using namespace std;
class student {
public:
	string name;
	int year, month, day;
};
int main() {
	int size, index, t_y = 0, t_m = 0, t_d = 0, b_y = 9999, b_m = 12, b_d = 31;
	cin >> size;
	student* st = new student[size];
	for (int n = 0; n < size; n++) {
		cin >> st[n].name >> st[n].day >> st[n].month >> st[n].year;
		if ((t_y < st[n].year) || (t_y == st[n].year && t_m < st[n].month) || (t_y == st[n].year && t_m == st[n].month && t_d < st[n].day)) {
			t_y = st[n].year;
			t_m = st[n].month;
			t_d = st[n].day;
		}
		if ((b_y > st[n].year) || (b_y == st[n].year && b_m > st[n].month) || (b_y == st[n].year && b_m == st[n].month && b_d > st[n].day)) {
			b_y = st[n].year;
			b_m = st[n].month;
			b_d = st[n].day;
		}
	}
	for (int n = 0; n < size; n++) {
		if (t_y == st[n].year && t_m == st[n].month && t_d == st[n].day)
			cout << st[n].name << endl;
	}
	for (int n = 0; n < size; n++) {
		if (b_y == st[n].year && b_m == st[n].month && b_d == st[n].day)
			cout << st[n].name << endl;
	}
	return 0;
}