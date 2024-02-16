#include <iostream>
#include <string>
using namespace std;
int main() {
	int test_case, B, G;
	string str;
	cin >> test_case;
	cin.ignore();
	for (int n = 0; n < test_case; n++) {
		B = G = 0;
		getline(cin, str);
		for (int m = 0; m < str.size(); m++) {
			if (str[m] == 'B' || str[m] == 'b')
				B++;
			else if (str[m] == 'G' || str[m] == 'g')
				G++;
		}
		cout << str << " is ";
		if (G > B)
			cout << "GOOD" << endl;
		else if (B > G)
			cout << "A BADDY" << endl;
		else
			cout << "NEUTRAL" << endl;
	}
	return 0;
}