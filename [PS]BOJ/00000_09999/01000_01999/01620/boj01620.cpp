#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
#define endl '\n'
bool checkIntStr(string str){
	for(int n = 0 ; n < str.size() ; n++) if(isdigit(str[n]) == 0) return false;
	return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<string, int> pokemonName;
    string pokemonNum[100001];
    string name, question;
	int sz, quesCnt;
    cin >> sz >> quesCnt;
    for(int n = 1; n <= sz; n++){
    	cin >> name;
    	pokemonName[name] = n;
    	pokemonNum[n] = name;
	}
	for(int n = 0; n < quesCnt; n++){
		cin >> question;
		if(checkIntStr(question)) cout << pokemonNum[stoi(question)] << endl;
		else cout << pokemonName[question] << endl;
	}
    return 0;
}
