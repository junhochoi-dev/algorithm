#include <iostream>
#include <string>
using namespace std;
int main() {
	int sum = 1, cnt = 0;
	string str;
	cin >> str;
	while(true){
		if (str.size() == 1) {
			cout << cnt << endl;
			break;
		}
		sum = 1;
		for (int n = 0; n < str.size(); n++)
			sum *= str[n] - '0';
		str = to_string(sum);
		cnt++;
	}
	return 0;
}