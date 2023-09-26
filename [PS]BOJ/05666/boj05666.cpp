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
    cout << fixed;
    cout.precision(2);
    double hotdog, participant;
    while(cin >> hotdog >> participant){
    	cout << hotdog / participant << endl;
	}
    return 0;
}