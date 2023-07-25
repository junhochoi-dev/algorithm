#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int sz, *arr, cnt = 1;
    while(true){
    	cin >> sz;
    	if(sz == 0) break;
    	int sum = 0, move = 0;
    	arr = new int[sz];
    	for(int n = 0 ; n < sz ; n++){
    		cin >> arr[n];
    		sum += arr[n];
		}
		for(int n = 0 ; n < sz ; n++){
			if(sum / sz < arr[n]){
				move += arr[n] - sum / sz;
			}
		}
		cout << "Set #" << cnt++ << endl;
		cout << "The minimum number of moves is " << move << "." << endl << endl;
	}
    return 0;
}