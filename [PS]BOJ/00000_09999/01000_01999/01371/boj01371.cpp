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
    int alphabet[26], max = -1;
    for(int n = 0 ; n < 26 ; n++) alphabet[n] = 0;
    while(getline(cin, str)){
    	for(int n = 0 ; n < str.size() ; n++) alphabet[str[n] - 'a']++;
	}
	for(int n = 0 ; n < 26 ; n++){
		if(max < alphabet[n]) max = alphabet[n];
	}
	for(int n = 0 ; n < 26 ; n++){
		if(max == alphabet[n]) cout << (char)('a' + n);
	}
	cout << endl;
    return 0;
}