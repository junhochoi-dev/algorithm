#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
long long intPow(int x){
	long long sum = 1;
	for(int n = 1; n <= x; n++) sum *= 10;
	return sum;
}
int main() {
    fastio;
    vector<int> vec, ans;
    long long N, K;
    cin >> N >> K;
    while(N != 0){
    	vec.push_back(N % K);
    	N /= K;
	}
	long long sum = 0;
	for(int n = 0, m = 0 ; n < vec.size() ; n++){
		if(vec[n] == 0) m = 0;
		else sum += vec[n] * intPow(m++);
	}
	while(sum != 0){
		ans.push_back(sum % K);
		sum /= K;
	}
	for(int n = ans.size() - 1 ; n >= 0 ; n--) cout << ans[n];
	cout << endl;
	return 0;
}