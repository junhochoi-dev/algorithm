#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>
using namespace std;
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
bool sameCheck(string std_str, string val){
	if(std_str == "-") return true;
	if(std_str == val) return true;
	return false;
}
bool check(tuple<string, string, string> _std, string subject, string fruit, string color){
	if(sameCheck(subject, get<0>(_std)) && sameCheck(fruit, get<1>(_std)) && sameCheck(color, get<2>(_std))) return true;
	return false;
}
int main() {
    fastio;
    string subject, fruit, color;
    vector<tuple<string, string, string>> vec;
    int sz_stu, sz_ques;
    cin >> sz_stu >> sz_ques;
    for(int n = 0 ; n < sz_stu ; n++){
    	cin >> subject >> fruit >> color;
    	vec.push_back(make_tuple(subject, fruit, color));
	}
	for(int n = 0 ; n < sz_ques ; n++){
		cin >> subject >> fruit >> color;
		int cnt = 0;
		for(int m = 0 ; m < vec.size() ; m++){
			if(check(vec[m], subject, fruit, color)) cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}