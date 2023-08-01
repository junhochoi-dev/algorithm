#include <iostream>
#include <string>
using namespace std;
int main() {
	cin.tie(NULL);
    cout.tie(NULL);
	ios::sync_with_stdio(false);

	char ch;
	int size, start, end, count;
	string str;
	cin >> str;
	cin >> size;
	for (int n = 0; n < size; n++) {
		cin >> ch >> start >> end;
		count = 0;
		for (int m = start; m <= end; m++) {
			if (ch == str[m])
				count++;
		}
		cout << count << '\n';
	}
	return 0;
}