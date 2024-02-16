#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
int main() {
    fastio;
    int sz;
    string str;
    cin >> sz;
    while(sz--){
    	cin >> str;
    	int cnt = 0;
    	bool check = true;
    	for(int n = 0, m = str.size() - 1 ; n < m ; n++, m--){
    		cnt++;
    		if(str[n] != str[m]){
    			check = false;
    			break;
			}
		}
		cout << check << ' ';
		if(check) cout << cnt + 1 << endl;
		else cout << cnt << endl;
	}
    return 0;
}