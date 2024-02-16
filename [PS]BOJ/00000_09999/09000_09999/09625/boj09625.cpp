#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main() {
    fastio;
    int x;
    vector<pair<int, int>> vec;
    vec.push_back({1, 0});
	cin >> x;
    for(int n = 1 ; n <= x ; n++){
    	int a = vec[n-1].first;
    	int b = vec[n-1].second;
    	vec.push_back({b, a + b});
	}
	cout << vec[x].first << ' ' << vec[x].second << endl;
	return 0;
}