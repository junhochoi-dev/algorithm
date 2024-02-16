#include <iostream>
#include <string>
using namespace std;
int main() {
	int count = 0;
	string str;
	for( int n = 0 ; n < 5; n++){
		cin >> str;
		if (str.find("FBI") != string::npos) {
			cout << n + 1 << endl;
			count++;
		}
	}
	if (count == 0)
		cout << "HE GOT AWAY!" << endl;
	return 0;
}