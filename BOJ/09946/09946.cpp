#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main() {
	int n = 1;
	char str[1000], tmp[1000];
	while (true) {
		cin >> str >> tmp;
		if (strcmp(str, "END") == 0 && strcmp(tmp, "END") == 0)
			break;
		sort(str, str + strlen(str));
		sort(tmp, tmp + strlen(tmp));
		cout << "Case " << n++ << ": ";
		if (strcmp(str, tmp) == 0)
			cout << "same" << endl;
		else
			cout << "different" << endl;
	}
	return 0;
}