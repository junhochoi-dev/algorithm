#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int size;
	cin >> size;

	vector<pair<int, int>> vt(size);

	for(int n = 0; n < size; n++){
		cin >> vt[n].first >> vt[n].second;
	}

	sort(vt.begin(), vt.end());

	for(int n = 0; n < size; n++){
		cout << vt[n].first << ' ' << vt[n].second << "\n";
	}
	return 0;
}