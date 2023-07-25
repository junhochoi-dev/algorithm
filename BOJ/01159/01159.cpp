#include <iostream>
#include <string>
using namespace std;
int main() {
	int size, alphabet[26] = { 0 }, count = 0;
	cin >> size;
	cin.ignore();
	string *player = new string[size];
	for (int n = 0; n < size; n++) {
		cin >> player[n];
		cin.ignore();
	}
	for (int n = 0; n < size; n++) {
		alphabet[(char)player[n].at(0) - 'a']++;
	}
	for (int n = 0; n < 26; n++) {
		if (alphabet[n] >= 5) {
			cout << (char)(n + 'a');
			count++;
		}
	}
	if (count == 0)
		cout << "PREDAJA";
	delete[] player;
	return 0;
}