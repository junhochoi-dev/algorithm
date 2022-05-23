#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define MAXVALUE 987654321
#define MINVALUE -987654321
int cnt[8001] = {0, };
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int size, val, sum = 0;
	vector<int> vt;

//	cout << fixed;
//	cout.precision(0);

	cin >> size;
	for(int n = 0 ; n < size; n++){
		cin >> val;
		vt.push_back(val);
		sum += val;
		cnt[4000 + val]++;
	}

	// 산술평균
	cout << floor((double)sum / size + 0.5) << endl;

	// 중앙값
	sort(vt.begin(), vt.end());
	cout << vt[vt.size() / 2] << endl;

	// 최빈값
	int flag;
	int max_cnt = 0;
	
	for (int n = 0; n < 8001; n++){
		if (cnt[n] > max_cnt){
			max_cnt = cnt[n];
			flag = n;
		}
	}
	for (int n = flag + 1; n < 8001; n++){
		if (cnt[n] == max_cnt){
			flag = n;
			break;
		}
	}
	cout << flag - 4000 << endl;

	// 최댓값과 최솟값의 차이
	cout << vt[size-1] - vt[0] << endl;
    return 0;
}