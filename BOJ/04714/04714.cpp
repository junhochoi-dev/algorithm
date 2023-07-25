#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed;
	cout.precision(2);
	double weight;
    while(true){
    	cin >> weight;
    	if(weight < 0) break;
    	cout << "Objects weighing ";
    	cout << weight;
    	cout << " on Earth will weigh ";
    	cout << weight * 0.167;
    	cout << " on the moon." << endl;
	}
    return 0;
}