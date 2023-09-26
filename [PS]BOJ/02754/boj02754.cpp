#include <iostream>
#include <string>
using namespace std;
int main() {
	double score = 0;
	string str;
	cin >> str;
	cout << fixed;
	cout.precision(1);
	switch (str[0]) {
	case 'A':
		score += 4;
		break;
	case 'B':
		score += 3;
		break;
	case 'C':
		score += 2;
		break;
	case 'D':
		score += 1;
		break;
	case 'F': {
		cout << score << endl;
		return 0;
	}
	}
	switch (str[1]) {
	case '+':
		score += 0.3;
		break;
	case '-':
		score -= 0.3;
		break;
	}
	cout << score << endl;
	return 0;
}