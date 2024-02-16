#include <iostream>
using namespace std;
int main() {
	bool check;
	int M, N, cnt_prime = 0, sum = 0, min = 10001;
	cin >> M >> N;
	for(int n = M; n <= N; n++){
		if(n == 1)
			continue;
		check = true;
		for(int m = 2; m <= n - 1; m++){
			if(n % m == 0){
				check = false;
				break;
			}
		}
		if(check){
			cnt_prime++;
			sum += n;
			if(min > n)
				min = n;
		}
	}
	if(cnt_prime == 0)
		cout << -1 << endl;
	else
		cout << sum << endl << min << endl;
	return 0;
}