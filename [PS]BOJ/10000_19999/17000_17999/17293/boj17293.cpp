#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	if (num != 1) {
		for (int n = num; n >= 2; n--) {
			cout << n <<" bottles of beer on the wall, "<< n <<" bottles of beer." << endl;
			if(n-1 != 1)
				cout << "Take one down and pass it around, "<< n - 1 <<" bottles of beer on the wall." << endl << endl;
			else
				cout << "Take one down and pass it around, 1 bottle of beer on the wall." << endl << endl;
		}
	}

	cout << "1 bottle of beer on the wall, 1 bottle of beer." << endl;
	cout << "Take one down and pass it around, no more bottles of beer on the wall." << endl << endl;
	
	if (num != 1) {
		cout << "No more bottles of beer on the wall, no more bottles of beer." << endl;
		cout << "Go to the store and buy some more, " << num << " bottles of beer on the wall." << endl;
	}
	else {
		cout << "No more bottles of beer on the wall, no more bottles of beer." << endl;
		cout << "Go to the store and buy some more, 1 bottle of beer on the wall." << endl;
	}
	return 0;
}