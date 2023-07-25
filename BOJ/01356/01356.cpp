#include <iostream>
#include <string>
using namespace std;
int main(){
	bool check = false;
	string str;
	cin >> str;
	for(int n = 0 ; n < str.size() - 1 ; n++){
		int front = 1;
		int end = 1;
		for(int m = 0 ; m <= n ; m++){
			front *= str[m] - '0';
		}
		for(int m = n + 1 ; m < str.size() ; m++){
			end *= str[m] - '0';
		}
		if(front == end){
			check = true;
			break;
		}
	}
	cout << (check ? "YES" : "NO") << endl;
	return 0;
}