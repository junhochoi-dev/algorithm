#include <iostream>
using namespace std;
class student {
private:
public:
	int test, penalty;
};
int main() {
	int size, t, p, index, count = 0;
	cin >> size;
	student *st = new student[size], temp;
	for (int n = 0; n < size; n++) {
		cin >> st[n].test >> st[n].penalty;
	}
	for (int n = 0; n < size; n++) {
		index = n;
		for (int m = n; m < size; m++) {
			if (st[m].test > st[index].test)
				index = m;
			if (st[m].test == st[index].test && st[m].penalty < st[index].penalty)
				index = m;
		}
		temp = st[n];
		st[n] = st[index];
		st[index] = temp;
	}
	for (int n = 5; n < size; n++) {
		if (st[n].test == st[4].test)
			count++;
	}
	cout << count << endl;

	return 0;
}