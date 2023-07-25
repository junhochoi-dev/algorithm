#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
bool is99(int x){
	if(x % 100 == 99) return true;
	return false;
}
int main() {
    fastio;
    int N;
    cin >> N;
    if(1 <= N && N <= 98){
    	cout << 99 << endl;
    	return 0;
	}
    int idx = 1;
	while(true){
		if(is99(N + idx)){
			cout << N + idx << endl;
			break;
		}
    	if(is99(N - idx)){
    		cout << N - idx << endl;
    		break;
		}
		idx++;
	}
	return 0;
}