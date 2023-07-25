#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;
int main() {
	stack<int> st;
	string eq1, eq2;
	cin >> eq1 >> eq2;
	if (eq1.size() < eq2.size())
		swap(eq1, eq2);
	reverse(eq1.begin(), eq1.end());
	reverse(eq2.begin(), eq2.end());
	for (int n = 0; n < eq2.size(); n++) {
		st.push(eq1[n] + eq2[n] - '0' * 2);
	}
	if (eq1.size() > eq2.size()) {
		for (int n = eq2.size(); n < eq1.size(); n++)
			st.push(eq1[n] - '0');
	}
	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}
	cout << endl;
	return 0;
}