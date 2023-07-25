#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	string str;
	int cnt, start, end;
	cin >> str >> cnt;
	for (int n = 0; n < cnt; n++) {
		cin >> start >> end;
		swap(str[start], str[end]);
	}
	cout << str << endl;
	return 0;
}