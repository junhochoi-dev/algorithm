#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
int main() {
	string str;
	int arr[15], index, size, ans;
	while (true) {
		getline(cin, str);
		if (str == "-1")
			break;
		memset(arr, 0, sizeof(int) * 15);
		index = size = ans = 0;
		for (int n = 0, m = 0; ; n++) {
			if (str[n] == '0') {
				break;
			}
			else if (str[n] == ' ') {
				arr[m++] = stoi(str.substr(index, n - index));
				index = n;
				size++;
			}
		}
		sort(arr, arr + size);
		for (int n = 0; arr[n] != 0; n++) {
			if (arr[n] % 2 == 0)
				for (int m = 0; m < n; m++)
					if (arr[n] / 2 == arr[m])
						ans++;
		}
		cout << ans << endl;
	}
	return 0;
}