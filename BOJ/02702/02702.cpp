#include <iostream>
using namespace std;
int GCD(int a, int b){
	int tmp;
	while(b){
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}
int LCM(int a, int b){
	return a * b / GCD(a,b);
}
int main() {
	int test_case, n1, n2;
	cin >> test_case;
	for(int n = 0; n < test_case; n++){
		cin >> n1 >> n2;
		cout << LCM(n1, n2) << ' ' << GCD(n1, n2) << endl;
	}
	return 0;
}