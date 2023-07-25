#include <iostream>
using namespace std;

int main() {
int test_case, H, W, cnt, rest;
cin >> test_case;
for(int n = 0 ; n < test_case; n++){
	cin >> H >> W >> cnt;
	if(cnt % H == 0){
		cout << H;
		rest = cnt / H;
	}
	else {
		cout << cnt % H;
		rest = cnt / H + 1;
	}
	
	if(rest / 10 == 0){
		cout << '0' << rest;
	}
	else{
		cout << rest;
	}
	cout << endl;
}
return 0;
}