#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int cnt9(int num) {
	int cnt = 0;
	string value = to_string(num);
	for (int n = 0; n < value.size(); n++)
		if (value[n] == '9')
			cnt++;
	return cnt;
}
int main() {
	int arr[500][500], N, M, top_r = 0, top_c = 0, cnt, sum = 0;
	cin >> N >> M;
	for (int n = 0; n < N; n++) {
		cnt = 0;
		for (int m = 0; m < M; m++) {
			cin >> arr[n][m];
			arr[n][m] = cnt9(arr[n][m]);
			if (arr[n][m] > 0) {
				cnt += arr[n][m];
				sum += arr[n][m];
			}
		}
		top_r = max(top_r, cnt);
	}
	for (int m = 0; m < M; m++) {
		cnt = 0;
		for (int n = 0; n < N; n++) {
			if (arr[n][m] > 0)
				cnt += arr[n][m];
		}
		top_c = max(top_c, cnt);
	}
	cout << sum - max(top_c, top_r) << endl;
	return 0;
}