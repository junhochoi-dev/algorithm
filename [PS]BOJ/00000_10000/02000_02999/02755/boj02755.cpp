#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
	int test_case, cnt;
	double score = 0, temp, sum_cnt = 0, sum = 0;
	string str, tmp;
	cin >> test_case;
	cout << fixed;
	cout.precision(2);
	for (int n = 0; n < test_case; n++) {
		cin >> tmp >> cnt >> str;
		sum_cnt += cnt;
		temp = 0;
		switch (str[0]) {
		case 'A':
			temp += 4;
			break;
		case 'B':
			temp += 3;
			break;
		case 'C':
			temp += 2;
			break;
		case 'D':
			temp += 1;
			break;
		}
		switch (str[1]) {
		case '+':
			temp += 0.3;
			break;
		case '-':
			temp -= 0.3;
			break;
		}
		sum += temp * cnt;
	}
	double val = roundf(sum / sum_cnt * 100) / 100;
	cout << val << endl;
	return 0;
}