#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define endl '\n'
bool isVowel(char ch){
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
	return false;	
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string password;
    while(true){
    	cin >> password;
    	if(password == "end") break;
    	bool haveVowel = false;
    	bool tripleCh = false;
    	bool doubleCh = false;
    	for(int n = 0 ; n < password.size() ; n++){
    		if(isVowel(password[n])) haveVowel = true;
    		if(n > 0 && n < password.size() - 1){
    			if(isVowel(password[n]) == isVowel(password[n - 1]) && isVowel(password[n]) == isVowel(password[n + 1]))
					tripleCh = true;
			}
			if(n < password.size() - 1 && password[n] != 'e' && password[n] != 'o'){
				if(password[n] == password[n + 1]) doubleCh = true;
			}
		}
		if(!haveVowel || tripleCh || doubleCh) cout << '<' << password << '>' << " is not acceptable." << endl;
		else cout << '<' << password << '>' << " is acceptable." << endl;
	}
	// 자음 consonant
	// 모음 vowel
    return 0;
}