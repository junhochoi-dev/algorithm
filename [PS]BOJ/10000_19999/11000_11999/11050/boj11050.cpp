#include <iostream>
using namespace std;
int fact(int num);
int main() {
	int a, b, sum = 1;
	cin >> a >> b;
	cout << fact(a) / fact(a - b) / fact(b) << endl;
	return 0;
}
int fact(int num) {
	int sum = 1;
	for (int n = 1; n <= num; n++)
		sum *= n;
	return sum;
}