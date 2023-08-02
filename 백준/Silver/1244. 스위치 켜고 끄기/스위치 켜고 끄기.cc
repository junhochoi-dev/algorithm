#include <iostream>
using namespace std;
int main() {
	int size, member;
	cin >> size;
	bool *arr = new bool[size];
	for(int n = 0 ; n < size ; n++) cin >> arr[n];
	cin >> member;
	for(int n = 0 ; n < member ; n++){
		int gender, value;
		cin >> gender >> value;
		switch(gender){
			case 1:{
				for(int n = 0 ; n < size ; n++)
					if((n + 1) % value == 0)
						arr[n] = !arr[n];
				break;
			}
			case 2:{
				int LB, RB;
				LB = RB = value - 1;
				for(int n = LB - 1, m = RB + 1 ; n >= 0 && m < size ; n--, m++){
					if(arr[n] == arr[m]){
					    LB = n;
					    RB = m;
					}
					else break;
				}
				for(int n = LB ; n <= RB ; n++) arr[n] = !arr[n];
				break;
			}
		}
	}
	for(int n = 1 ; n <= size ; n++){
	     cout << arr[n - 1] << ' ';
	     if(n % 20 == 0) cout << endl;
	}
	return 0;
}