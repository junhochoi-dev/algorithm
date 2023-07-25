#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
	char arr[5][16];
	string str;
	for (int n = 0; n < 5; n++) {
		memset(arr[n], '-', sizeof(char) * 16);
	}
	for (int n = 0; n < 5; n++) {
		cin >> str;
		for (int m = 0; m < str.size(); m++) {
			arr[n][m] = str[m];
		}
	}
	for (int n = 0; n < 16; n++) {
		for (int m = 0; m < 5; m++)
			if(arr[m][n] != '-')
				cout << arr[m][n];
	}
	return 0;
}