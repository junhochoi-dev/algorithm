#include <iostream>
#include <string>
using namespace std;
int main() {
	bool check = true;
	int cnt;
	string str, tmp;
	cin >> cnt >> str >> tmp;
	if (cnt % 2 == 0) {
		if (str == tmp)
			cout << "Deletion succeeded" << endl;
		else
			cout << "Deletion failed" << endl;
	}
	else {
		for(int n = 0 ; n < str.size();n++){
			if (str[n] == tmp[n]) {
				check = false;
				break;
			}
		}
		if (check)
			cout << "Deletion succeeded" << endl;
		else
			cout << "Deletion failed" << endl;
	}
	return 0;
}