#include <iostream>
#define PI 3.14159265358979 
using namespace std;
int main() {
	double r;
	cin >> r;
	cout << fixed;
	cout.precision(6);
	cout << r * r * PI << endl;
	cout << r * r * 2 << endl;

	return 0;
}