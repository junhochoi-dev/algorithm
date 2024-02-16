#include <iostream>
using namespace std;
int main() {
	string doc, jae;
	cin >> jae;
	cin.clear();
	cin >> doc;
	if (doc.size() <= jae.size())
		cout << "go" << endl;
	else
		cout << "no" << endl;
	return 0;
}
