#include <iostream>
#include <string>
using namespace std;
int main() {
	string order;
	getline(cin, order);
	if (order == "true AND true" || order == "true OR true"
		|| order == "false OR true" || order == "true OR false"
		|| order == "true")
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}