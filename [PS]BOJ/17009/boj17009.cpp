#include <iostream>
using namespace std;
int main() {
	int apple = 0, banana = 0, score;
	for (int n = 0, point = 3; n < 3; n++, point--) {
		cin >> score;
		apple += score * point;
	}
	for (int n = 0, point = 3; n < 3; n++, point--) {
		cin >> score;
		banana += score * point;
	}
	if (apple > banana)
		cout << "A" << endl;
	else if (apple < banana)
		cout << "B" << endl;
	else
		cout << "T" << endl;
	return 0;
}