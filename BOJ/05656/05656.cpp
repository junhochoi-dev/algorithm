#include <iostream>
#include <string>
using namespace std;
int main() {
	string str, temp;
	int first, end, count = 0;
	bool answer = 0;
	while (true) {
		count++;
		getline(cin, str);
		first = str.find(' ');
		end = str.rfind(' ');
		temp = str.substr(first + 1 ,end - first - 1);
		first = stoi(str.substr(0, first));
		end = stoi(str.substr(end, str.size()));
		if (temp == ">")
			answer = bool(first > end);
		else if(temp == "<")
			answer = bool(first < end);
		else if (temp == ">=")
			answer = bool(first >= end);
		else if (temp == "<=")
			answer = bool(first <= end);
		else if (temp == "==")
			answer = bool(first == end);
		else if (temp == "!=")
			answer = bool(first != end);
		else if (temp == "E")
			break;

		if (answer)
			cout << "Case " << count <<": true" << endl;
		else
			cout << "Case " << count << ": false" << endl;
		cin.clear();
	}
	return 0;
}