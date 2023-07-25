#include <iostream>
using namespace std;
int main() {
	int E, F, C, count = 0;
	cin >> E >> F >> C;
	E = E + F;
	while (true) {
		if (E < C){
			cout << count;
			break;
		}
		count += E / C;
		E = E - E / C * C + E / C;
	}
	return 0;
}