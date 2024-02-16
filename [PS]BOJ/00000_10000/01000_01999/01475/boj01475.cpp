#include <iostream>
#include <string>
using namespace std;
int main() {
	int num[10] = { 0 }, max = 0, max69;
	string str;
	cin >> str;
	for (int n = 0; n < str.size(); n++)
		num[str[n] - '0']++;
	for (int n = 0; n < 10; n++)
		if (n != 6 && n != 9 && max < num[n])
			max = num[n];
	if ((num[6] + num[9]) % 2 == 0)
		max69 = (num[6] + num[9]) / 2;
	else
		max69 = (num[6] + num[9] + 1) / 2;
	cout << ( max > max69 ? max : max69 ) << endl;
	return 0;
}