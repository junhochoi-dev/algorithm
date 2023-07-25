#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int size, E, A;
	cin >> size;
	for(int n = 0 ; n < size ; n++){
		cin >> E >> A;
		cout << (E < A ? "NO BRAINS" : "MMM BRAINS") << endl;
	}
	return 0;
}