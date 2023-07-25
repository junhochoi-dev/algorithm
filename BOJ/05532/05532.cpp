#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int L, A, B, C, D;
	int c_day, d_day;
	cin >> L >> A >> B >> C >> D;
	if (A % C == 0)
		c_day = A / C;
	else
		c_day = A / C + 1;
	if (B % D == 0)
		d_day = B / D;
	else
		d_day = B / D + 1;
	cout << L - max(c_day, d_day) << endl;
	return 0;
}