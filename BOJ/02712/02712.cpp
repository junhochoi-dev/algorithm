#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
	double val;
    string unit;
    cout << fixed;
	cout.precision(4);
    cin >> tc;
    while(tc--){
    	cin >> val >> unit;
    	if(unit == "kg"){
    		cout << val * 2.2046 << ' ' << "lb" <<  endl;
		}
		else if(unit == "l"){
			cout << val * 0.2642 << ' ' << 'g' << endl;
		}
		else if(unit == "lb"){
			cout << val * 0.4536 << ' ' << "kg" << endl;
		}
		else if(unit == "g"){
			cout << val * 3.7854 << ' ' << "l" << endl;
		}
	}
    return 0;
}