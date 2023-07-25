#include <iostream>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int size, sum_cnt, *arr, *sum, start, end;
	cin >> size >> sum_cnt;
	arr = new int[size];
	sum = new int[size];
	for(int n = 0 ; n < size ; n++) cin >> arr[n];
	sum[0] = arr[0];
	for(int n = 1 ; n < size ; n++) sum[n] = sum[n-1] + arr[n];
	for(int n = 0 ; n < sum_cnt ; n++){
		cin >> start >> end;
		if(start == 1)
			cout << sum[end - 1] << '\n';
		else
			cout << sum[end - 1] - sum[start - 2] << '\n';
	}
	return 0;
}
