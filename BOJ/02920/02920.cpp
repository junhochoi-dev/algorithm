#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int level[8];
	int standard[8] = { 8,7,6,5,4,3,2,1 };
	int NOT_ASC, NOT_DESC;
	NOT_ASC = NOT_DESC = 0;
	for (int n = 0; n < 8; n++)
		cin >> level[n];
	for (int n = 0; n < 8; n++) {
		if (standard[n] != level[n]) {
			NOT_DESC++;
			break;
		}
	}
	sort(standard, standard + 8);
	for (int n = 0; n < 8; n++) {
		if (standard[n] != level[n]) {
			NOT_ASC++;
			break;
		}
	}
	if (NOT_ASC == 0)
		cout << "ascending" << endl;
	else if (NOT_DESC == 0)
		cout << "descending" << endl;
	else
		cout << "mixed" << endl;
	return 0;
}