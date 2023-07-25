#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int burger[3];
	int beverage[2];
	for (int n = 0; n < 3; n++)
		cin >> burger[n];
	for (int n = 0; n < 2; n++)
		cin >> beverage[n];
	cout << *min_element(burger, burger + 3) + *min_element(beverage, beverage + 2) - 50 << endl;
}