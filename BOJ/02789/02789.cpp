#include <iostream>
using namespace std;
int main() {
	string word;
	cin >> word;
	for (int n = 0; n < word.size(); n++) {
		if (!('A' <= word[n] && word[n] <= 'E' || word[n] == 'G'
			|| word[n] == 'I' || word[n] == 'M' || word[n] == 'R'))
			cout << word[n];
	}
	cout << endl;
	return 0;
}