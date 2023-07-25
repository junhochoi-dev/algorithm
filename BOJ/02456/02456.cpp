#include <iostream>
#include <algorithm>
using namespace std;
class candidate {
public:
	int arr[4] = { 0 };
};
bool operator == (candidate x, candidate y) {
	if (x.arr[1] == y.arr[1] && x.arr[2] == y.arr[2] && x.arr[3] == y.arr[3])
		return true;
	else
		return false;
}
int main(void) {
	int size, score, index, value;
	candidate cdd[3], temp[3], tmp;
	cin >> size;
	for (int n = 0; n < size; n++) {
		for (int m = 0; m < 3; m++) {
			cin >> score;
			cdd[m].arr[score]++;
		}
	}
	for (int n = 0; n < 3; n++) {
		cdd[n].arr[0] = cdd[n].arr[1] + cdd[n].arr[2] * 2 + cdd[n].arr[3] * 3;
		temp[n] = cdd[n];
	}
	for (int n = 0; n < 3; n++) {
		index = n;
		for (int m = n + 1; m < 3; m++) {
			if (temp[index].arr[0] < temp[m].arr[0])
				index = m;
			else if (temp[index].arr[0] == temp[m].arr[0]) {
				if (temp[index].arr[3] < temp[m].arr[3])
					index = m;
				else if (temp[index].arr[3] == temp[m].arr[3]) {
					if (temp[index].arr[2] < temp[m].arr[2])
						index = m;
					else if (temp[index].arr[2] == temp[m].arr[2]) {
						if (temp[index].arr[1] < temp[m].arr[1])
							index = m;
					}
				}
			}
		}
		tmp = temp[index];
		temp[index] = temp[n];
		temp[n] = tmp;
	}
	if (temp[0] == temp[1])
		cout << "0 ";
	else {
		for (int n = 0; n < 3; n++) {
			if (temp[0] == cdd[n]) {
				cout << n + 1 << " ";
				break;
			}
		}
	}
	cout << temp[0].arr[0] << endl;
	return 0;
}