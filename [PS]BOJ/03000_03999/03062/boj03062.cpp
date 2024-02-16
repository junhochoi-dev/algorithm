#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	int test_case, sum;
	string str, tmp;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> str;
		tmp = str;
		reverse(tmp.begin(), tmp.end());
		sum = stoi(str) + stoi(tmp);
		
		str = to_string(sum);
		tmp = str;
		reverse(tmp.begin(), tmp.end());
		if (str == tmp)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}