#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
	int size;
	string str;
	vector<string> vt;
	cin >> str;
	size = str.size();
	for (int n = 0; n < size; n++) {
		vt.push_back(str);
		str.erase(0, 1);
	}
	sort(vt.begin(), vt.end());
	for (int n = 0; n < size; n++) {
		cout << vt[n] << endl;
	}
	return 0;
}