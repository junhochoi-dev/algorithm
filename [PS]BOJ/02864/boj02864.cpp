#include <iostream>
#include <string>
using namespace std;
int main() {
	int min, max;
	string A, B;
	cin >> A >> B;
	for (int n = 0; n < A.size(); n++) {
		if (A[n] == '5')
			A[n] = '6';
	}
	for (int n = 0; n < B.size(); n++) {
		if (B[n] == '5')
			B[n] = '6';
	}
	max = stoi(A) + stoi(B);
	for (int n = 0; n < A.size(); n++) {
		if (A[n] == '6')
			A[n] = '5';
	}
	for (int n = 0; n < B.size(); n++) {
		if (B[n] == '6')
			B[n] = '5';
	}
	min = stoi(A) + stoi(B);
	cout << min << ' ' << max << endl;
	return 0;
}