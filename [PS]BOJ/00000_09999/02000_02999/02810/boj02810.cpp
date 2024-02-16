#include <iostream>
using namespace std;
int main(){
	int size, s = 0, l = 0;
	string str;
	cin >> size >> str;
	for(int n = 0 ; n < size ; n++){
		if(str[n] == 'L')
			l++;
	}
	if(l == 0)
		cout << size << endl;
	else
		cout << size - (l / 2) + 1 << endl;
	return 0;
}