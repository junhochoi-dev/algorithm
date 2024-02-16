#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    int tc;
    cin >> tc;
    while(tc--){
    	cin >> str;
    	if(str.size() >= 6 && str.size() <= 9) cout << "yes" << endl;
    	else cout << "no" << endl;
	}
    return 0;
}