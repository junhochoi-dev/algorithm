#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int sz, val;
    cin >> sz;
    vector<int> vec;
    for(int n = 0 ; n < sz ; n++){
    	cin >> val;
    	vec.push_back(val);
	}
	sort(vec.begin(), vec.end());
	int left = 0, right = sz - 1;
	int ph = 2000000000, idx1, idx2;
	while(left < right){
		if(abs(vec[left] + vec[right]) < ph){
			ph = abs(vec[left] + vec[right]);
			idx1= left;
			idx2 = right;
			if(vec[left] + vec[right] == 0) break;
		}
		if(vec[left] + vec[right] > 0) right--;
		else if(vec[left] + vec[right] < 0) left++;
	}
    cout << vec[idx1] << ' ' << vec[idx2] << endl;
    return 0;
}