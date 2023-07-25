#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int science[4], society[2];
	for (int n = 0; n < 4; n++)
		cin >> science[n];
	for (int n = 0; n < 2; n++)
		cin >> society[n];
	sort(science, science + 4);
	sort(society, society + 2);
	cout << science[1] + science[2] + science[3] + society[1] << endl;
	return 0;
}