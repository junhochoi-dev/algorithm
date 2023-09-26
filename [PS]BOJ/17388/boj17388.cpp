#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int s, k, h, lowest;
	cin >> s >> k >> h;
	lowest = min(s, min(k, h));
	if (s + k + h >= 100)
		cout << "OK" << endl;
	else {
		if (lowest == s)
			cout << "Soongsil" << endl;
		else if(lowest == k)
			cout << "Korea" << endl;
		else
			cout << "Hanyang" << endl;
	}
	return 0;
}