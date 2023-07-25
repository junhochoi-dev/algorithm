#include <iostream>
using namespace std;
int main() {
	char input[100], answer[100];
	int test_case, word, count;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		count = 0;
		cin >> word;
		cin.ignore();
		for (int m = 0; m < word; m++)
			cin >> input[m];
		cin.ignore();
		for (int m = 0; m < word; m++)
			cin >> answer[m];
		for (int m = 0; m < word; m++) {
			if (input[m] != answer[m])
				count++;
		}
		cout << "Case " << n + 1 << ": " << count << endl;
	}
	return 0;
}