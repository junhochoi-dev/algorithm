#include <iostream>
using namespace std;
int main() {
	bool check = false;
	int num, sum, tmp, ans = 1000001;
	cin >> num;
	for(int n = num - 1; n > 0; n--){
		tmp = sum = n;
		while(true){
			if(tmp % 10 == 0 && tmp / 10 == 0)
				break;
			sum += tmp % 10;
			tmp /= 10;
		}
		if(sum == num && ans > n){
			ans = n;
		}
	}
	if(ans == 1000001)
		cout << 0 << endl;
	else
		cout << ans << endl;
	return 0;
}