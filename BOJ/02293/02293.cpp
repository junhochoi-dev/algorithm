#include <iostream>
#include <string>
using namespace std;
#define endl '\n'

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// freopen("input.txt", "r", stdin);
	int N, K, *coin;
	int price[10001] = {0, };
	cin >> N >> K;
	coin = new int[N];
	for(int n = 0; n < N; n++) cin >> coin[n];
	price[0]++;

	for(int n = 0; n < N; n++){
		for(int m = coin[n]; m <= K; m++){
			price[m] += price[m - coin[n]];
		}
	}
	cout << price[K] << endl;
    return 0;
}