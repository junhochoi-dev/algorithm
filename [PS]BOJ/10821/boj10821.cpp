#include <iostream>
#include <string>
using namespace std;
int main() {
	int cnt = 0;
	string str;
	cin >> str;
	for (int n = 0; n < str.size(); n++) {
		if (str[n] == ',')
			cnt++;
	}
	cout << cnt + 1 << endl;
	return 0;
}