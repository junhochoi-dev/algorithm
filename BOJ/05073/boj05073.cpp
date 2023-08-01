#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[3];
    while(true){
    	for(int n = 0 ; n < 3 ; n++) cin >> arr[n];
    	if(arr[0] == 0 && arr[1] == 0 & arr[2] == 0) break;
    	sort(arr, arr + 3);
    	if(arr[2] >= arr[0] + arr[1]){
    		cout << "Invalid" << endl;
    		continue;
		}
    	if(arr[0] == arr[1] && arr[1] == arr[2]) cout << "Equilateral" << endl;
    	else if(arr[0] != arr[1] && arr[1] != arr[2] && arr[2] != arr[0]) cout << "Scalene" << endl;
    	else cout << "Isosceles" << endl;
	}
    return 0;
}