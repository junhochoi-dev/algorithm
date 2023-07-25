#include <iostream>
#include <string>
using namespace std;
int main() {
	int test_case, cnt;
	string str, tmp;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> str;
		cin >> tmp;
		cnt = 0;
		for (int m = 0; m < str.size(); m++) {
			if (str[m] != tmp[m])
				cnt++;
		}
		cout << "Hamming distance is " << cnt << "." << endl;
	}
	return 0;
}