#include <iostream>
#include <string>
using namespace std;
bool Han_number(int num) {
	string tmp = to_string(num);
	int len = tmp.size();
	if (len == 2 || len == 1)
		return true;
	int gap = tmp[0] - tmp[1];
	for (int n = 0; n < len - 1; n++) {
		if (gap != tmp[n] - tmp[n + 1])
			return false;
	}
	return true;
}
int main() {
	int end, cnt = 0;
	cin >> end;
	for (int n = 1; n <= end; n++) {
		if (Han_number(n))
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}