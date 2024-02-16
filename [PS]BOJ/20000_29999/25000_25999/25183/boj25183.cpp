#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define endl '\n'

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// freopen("input.txt", "r", stdin);
	int size, cnt = 0;
	string str;
	cin >> size >> str;
	for(int n = 0 ; n < size - 1 ; n++){
		if(cnt == 4) break;
		if(abs(str[n] - str[n+1]) == 1) cnt++;
		else cnt = 0;
	}
	cout << (cnt == 4 ? "YES" : "NO") << endl;
	
    return 0;
}