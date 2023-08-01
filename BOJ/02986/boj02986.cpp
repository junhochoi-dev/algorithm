#include <iostream>
using namespace std;
int main(){
	long long num, tmp = 1;
	cin >> num;
	for(long long n = 2 ; n * n <= num ; n++){
		if(num % n == 0){
			tmp = num / n;
			break;
		}
	}
	cout << num - tmp << endl;
	return 0;
}