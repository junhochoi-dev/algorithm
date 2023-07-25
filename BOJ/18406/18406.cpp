#include <iostream>
using namespace std;
int main(){
	string str;
	int front_sum = 0, end_sum = 0;
	cin >> str;
	for(int n = 0 ;n < str.size() / 2; n++){
		front_sum += str[n];
		end_sum += str[str.size() - n - 1];
	}
	cout << (front_sum == end_sum ? "LUCKY" : "READY") << endl;
	return 0;
}