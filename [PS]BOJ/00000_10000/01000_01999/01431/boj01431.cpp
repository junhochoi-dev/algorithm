#include <iostream>
#include <algorithm>
using namespace std;
class str {
private:
public:
	string str_arr;
};
int main(void) {
	int size, index, sum1, sum2;
	cin >> size;
	cin.ignore();
	string* str = new string[size], temp;
	for (int n = 0; n < size; n++)
		cin >> str[n];
	for (int n = 0; n < size; n++) {
		index = n;
		for (int m = n + 1; m < size; m++) {
			sum1 = sum2 = 0;
			if (str[index].size() > str[m].size())
				index = m;
			else if (str[index].size() == str[m].size()) {
				sum1 = sum2 = 0;
				for (int i = 0; i < str[index].size(); i++) {
					if (str[index].at(i) >= '0' && str[index].at(i) <= '9')
						sum1 += str[index].at(i) - '0';
					if (str[m].at(i) >= '0' && str[m].at(i) <= '9')
						sum2 += str[m].at(i) - '0';
				}
				if(sum1 != sum2)
					index = sum1 > sum2 ? m : index;
				else
					index = str[index] > str[m] ? m : index;
			}
		}
		temp = str[index];
		str[index] = str[n];
		str[n] = temp;
	}
	for (int n = 0; n < size; n++)
		cout << str[n] << endl;
	return 0;
}