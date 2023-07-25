#include <iostream>
#include <string>
using namespace std;
int main() {
	int input[5], example[5] = { 1,2,3,4,5 }, temp;
	for (int n = 0; n < 5; n++)
		cin >> input[n];
	while (true) {
		for (int n = 0; n < 4; n++) {
			if (input[n] > input[n + 1]) {
				temp = input[n];
				input[n] = input[n + 1];
				input[n + 1] = temp;
				for (int m = 0; m < 5; m++)
					cout << input[m] << ' ';
				cout << endl;
			}
		}
		for (int n = 0; n < 5; n++) {
			if (input[n] != example[n]) {
				break;
			}
			else if (n == 4 && input[n] == example[n]) {
				return 0;
			}
		}
			
	}
	return 0;
}