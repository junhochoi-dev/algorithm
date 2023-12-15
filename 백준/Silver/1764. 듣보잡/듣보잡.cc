#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<string, int> dict;
    int N, M;
    string name;
    cin >> N >> M;
    while(N--){
    	cin >> name;
    	dict[name] = 1;
	}
	while(M--){
    	cin >> name;
    	if(dict.find(name) == dict.end()) dict[name] = 1;
    	else dict[name] = 2;
	}
	vector<string> dbj;
	for(auto iter = dict.begin() ; iter != dict.end() ; iter++){
		if(iter->second == 2) dbj.push_back(iter->first);
	}
	sort(dbj.begin(), dbj.end());
	cout << dbj.size() << endl;
	for(int n = 0 ; n < dbj.size() ; n++) cout << dbj[n] << endl;
    return 0;
}
