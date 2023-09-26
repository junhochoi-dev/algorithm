#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	int test_case;
	bool check = false;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> str;
		if (str == "anj")
			check = true;
	}
	if (check)
		cout << "뭐야;" << endl;
	else
		cout << "뭐야?" << endl;
	return 0;
}