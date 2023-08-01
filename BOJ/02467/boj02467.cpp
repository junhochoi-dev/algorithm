#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt", "r", stdin);
    int left, right, sz, val;
    int sumMin = 2000000000 + 1;
    int ansLeft = 0, ansRight = 0;
    vector<int> vt;
    cin >> sz;
    left = 0;
    right = sz - 1;
    for(int n = 0 ; n < sz ; n++){
    	cin >> val;
    	vt.push_back(val);
	}
	while(left < right){
		int sum = vt[left] + vt[right];
		if(abs(sum) < sumMin){
			ansLeft = left;
			ansRight = right;
			sumMin = abs(sum);
		}
		if(sum == 0) break;
		else if(sum > 0) right--;
		else if(sum < 0) left++;
	}
	cout << vt[ansLeft] << ' ' << vt[ansRight] << endl;
    return 0;
}
