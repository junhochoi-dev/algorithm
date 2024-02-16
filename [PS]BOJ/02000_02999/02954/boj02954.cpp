#include <iostream>
#include <string>
using namespace std;
#define endl '\n'

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// freopen("input.txt", "r", stdin);
	string str;
	getline(cin, str);
	for(int n = 0; n < str.size(); n++){
		cout << str[n];
		if(str[n] == 'a' || str[n] == 'e' || str[n] == 'i' || str[n] == 'o' || str[n] == 'u'){
			n += 2;
		}
	}
    return 0;
}