#include <algorithm>
#include <iostream>
#include <vector>
#define fo(N) for(int n = 0 ; n < N ; n++)
using namespace std;
vector<int> vt;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, value;
    cin >> N;
    fo(N) { cin >> value; vt.push_back(value); }
    sort(vt.begin(), vt.end());
    cin >> M;
    fo(M) { cin >> value; cout << upper_bound(vt.begin(), vt.end(), value) - lower_bound(vt.begin(), vt.end(), value) << ' '; }
	return 0;
}