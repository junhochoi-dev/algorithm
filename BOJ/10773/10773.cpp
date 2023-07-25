#include <iostream>
#include <vector>
using namespace std;
int main() {
	int num, size, sum = 0;
	cin >> size;
	vector<int> v;
	for (int n = 0; n < size; n++) {
		cin >> num;
		if (num == 0)
			v.pop_back();
		else
			v.push_back(num);
	}
	if (v.empty())
		cout << 0 << endl;
	else {
		for (int n = 0; n < v.size(); n++)
			sum += v[n];
		cout << sum << endl;
	}
	return 0;
}