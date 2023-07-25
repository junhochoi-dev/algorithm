#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int root[10001];
int price[10001];
bool rootCheck[10001];
int N, relationship, from, to, myMoney;
int findRoot(int x){
	if(root[x] == x) return x;
	return root[x] = findRoot(root[x]);
}
void unionRoot(int x, int y){
	if(x > y) swap(x, y);
	int rx = findRoot(x);
	int ry = findRoot(y);
	if(price[rx] > price[ry]) root[rx] = ry;
	else root[ry] = rx;
}
int main() {
    fastio;
    cin >> N >> relationship >> myMoney;
    for(int n = 1 ; n <= N ; n++){
    	cin >> price[n];
		root[n] = n;
		rootCheck[n] = false;
	}
    for(int n = 0 ; n < relationship ; n++){
    	cin >> from >> to;	
    	unionRoot(from, to);
	}
	long long sum = 0;
	for(int n = 1 ; n <= N ; n++){
		int idx = findRoot(n);
		if(!rootCheck[idx]){
			sum += price[idx];
			rootCheck[idx] = true;
		}
	}	
	if(sum > myMoney) cout << "Oh no" << endl;
	else cout << sum << endl;
	return 0;
}