#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
#define endl '\n'

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N1, N2, N12;
	cin >> N1 >> N2 >> N12;
	cout << ceil((N1 + 1)*(N2 + 1) / (N12 + 1) - 1) << endl;
	return 0;
}