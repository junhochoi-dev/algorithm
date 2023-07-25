#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
	int N, D, p, v;
	cin >> N >> D;
	vector<pair<long long, long long>> vt;
	for (int n = 0; n < N; n++) {
		cin >> p >> v;
		vt.push_back(make_pair(p, v));
	}

	sort(vt.begin(), vt.end());

	long long ans = 0, tmp = 0;
	int left = 0, right = 0;
	while(right < N && left <= right){
		if (vt[right].first - vt[left].first < D) tmp += vt[right++].second;
		else tmp -= vt[left++].second;
		ans = tmp > ans ? tmp : ans;
	}
	cout << ans << endl;
	return 0;
}