#include <iostream>
using namespace std;
int main() {
	double A, B, V;
	cin >> A >> B >> V;

	if((V - A) / (A - B) != (int)((V - A) / (A - B)))
		cout << (int)((V - A) / (A - B)) + 2 << endl;
	else
		cout << (int)((V - A) / (A - B)) + 1 << endl;
	return 0;
}