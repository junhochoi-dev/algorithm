#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int sz, need;
    cin >> sz >> need;
    long long *tree = new long long[sz];
    for(int n = 0 ; n < sz ; n++) cin >> tree[n];
    sort(tree, tree + sz);
    long long bottom = 0, top = tree[sz - 1], cut, mid;
	while(bottom <= top){
		long long sum = 0;
    	mid = (top + bottom) / 2;
    	for(int n = 0 ; n < sz ; n++) tree[n] > mid ? sum += tree[n] - mid : NULL;
		if(sum >= need){
			cut = mid;
			bottom = mid + 1;
		}
		else top = mid - 1;
		mid = (bottom + top) / 2;
	}
	cout << cut << endl;
    return 0;
}