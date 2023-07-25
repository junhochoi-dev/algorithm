#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int x_john, y_john;
	int x_bessie, y_bessie;
	int x_daisy, y_daisy;
	int daisy = 0, bessie = 0;
	cin >> x_bessie >> y_bessie;
	cin >> x_daisy >> y_daisy;
	cin >> x_john >> y_john;
	daisy = abs(x_john - x_daisy) + abs(y_john - y_daisy);
	bessie = max(abs(x_john - x_bessie), abs(y_john - y_bessie));
	if (daisy < bessie)
		cout << "daisy" << endl;
	else if (daisy > bessie)
		cout << "bessie" << endl;
	else
		cout << "tie" << endl;
	return 0;
}