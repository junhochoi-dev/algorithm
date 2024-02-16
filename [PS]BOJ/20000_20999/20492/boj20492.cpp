#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    cout << (int)(N * 0.78) << ' ' << (int)(N * 0.8 + N * 0.2 * 0.78) << endl;
	return 0;
}