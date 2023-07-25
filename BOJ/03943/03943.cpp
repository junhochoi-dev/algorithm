#include <iostream>
#include <cmath>
#define endl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int size, value;
    cin >> size;
    for(int n = 0 ; n < size ; n++){
        int maximum = 0;
        cin >> value;
        while(true){
            maximum = max(maximum, value);
            if(value == 1) break;
            if(value % 2 == 0) value /= 2;
            else value = value * 3 + 1;
        }
        cout << maximum << endl;
    }
	return 0;
}