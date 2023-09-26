#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int age, weight;
    string name;
    while(true){
    	cin >> name >> age >> weight;
    	if(name == "#" && age == 0 && weight == 0) break;
    	cout << name << ' ';
    	if(age > 17 || weight >= 80) cout << "Senior" << endl;
    	else cout << "Junior" << endl;
	}
    return 0;
}