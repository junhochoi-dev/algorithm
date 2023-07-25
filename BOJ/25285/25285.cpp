#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
using namespace std;
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main() {
    fastio;
    int sz;
    double weight, height, bmi;
    cin >> sz;
    while(sz--){
    	cin >> height >> weight;
    	bmi = weight / (height * 0.01) / (height * 0.01);
    	if(height < 140.1) cout << 6 << endl;
    	else if(height < 146) cout << 5 << endl;
    	else if(height < 159) cout << 4 << endl;
    	else if(height < 161) {
    		if(bmi >= 16.0 && bmi < 35.0) cout << 3 << endl;
    		else cout << 4 << endl;
    	}
    	else if(height < 204){
    		if(bmi >= 20.0 && bmi < 25.0) cout << 1 << endl;
    		else if(bmi >= 18.5 && bmi < 20.0) cout << 2 << endl;
    		else if(bmi >= 25.0 && bmi < 30.0) cout << 2 << endl;
    		else if(bmi >= 16.0 && bmi < 18.5) cout << 3 << endl;
    		else if(bmi >= 30.0 && bmi < 35.0) cout << 3 << endl;
    		else cout << 4 << endl;
		}
		else cout << 4 << endl;
	}
	return 0;
}