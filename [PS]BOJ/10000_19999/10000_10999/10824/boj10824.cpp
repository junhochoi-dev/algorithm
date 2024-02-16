#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
	string n1, n2, n3, n4;
	long long g1, g2;
	cin >> n1 >> n2 >> n3 >> n4;
	g1 = stoull(n1) * pow(10, n2.size()) + stoull(n2);
	g2 = stoull(n3) * pow(10, n4.size()) + stoull(n4);
	cout << g1 + g2 << endl;
	return 0;
}