#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num[3];
    while (true) {
		for (int n = 0; n < 3; n++) cin >> num[n];
		if (num[0] == 0 && num[1] == 0 && num[2] == 0) break;
		if (num[0] + num[2] == 2 * num[1]) cout << "AP " << 2 * num[2] - num[1] << endl;
		else {// num[1] * num[1] == num[0] * num[2]
			cout << "GP " << num[2] * num[2] / num[1] << endl;
		}
	}
    return 0;
}