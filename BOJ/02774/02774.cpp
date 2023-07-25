#include <iostream>
#include <string>
using namespace std;
#define endl '\n'
#define MAXSIZE 10001

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// freopen("input.txt", "r", stdin);
	int size, cnt[10], sum = 0;
	string str;
	cin >> size;
	for(int n = 0; n < size; n++){
		cin >> str;
		sum = 0;
		for(int m = 0; m < 10; m++){
			cnt[m] = false;
		}
		for(int m = 0; m < str.size(); m++){
			cnt[str[m] - '0'] = true;
		}
		for(int m = 0; m < 10; m++){
			if(cnt[m]) sum++;
		}
		cout << sum << endl;
	}
    return 0;
}