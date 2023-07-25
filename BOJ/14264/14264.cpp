#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double num;
	cin >> num;
	cout << fixed;
	cout.precision(10);
	cout << pow(num, 2) * sqrt(3) / 4 << endl;
	return 0;
}