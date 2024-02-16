#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cout << fixed;
    cout.precision(2);
    
    double person;
    while(true){
    	cin >> person;
    	if(person == 0) break;
    	double sum = 0;
    	for(int n = 0 ; n < 5 ; n++) sum += pow(person, n);
    	cout << sum << endl;
	}
    return 0;
}
