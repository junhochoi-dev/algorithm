#include <iostream>
using namespace std;

int main() {
	int num, originNum, reverseNum, size = 0;
	while (true) {
		cin >> num;
		if (num == 0)
			break;
		originNum = num;
		size = 0;
		reverseNum = 0;
		while (true) {
			if (!(originNum / 10 == 0 && originNum % 10 == 0)) {
				size++;
				originNum /= 10;
			}
			else
				break;
		}
		originNum = num;
		while (size != 0) {
			reverseNum *= 10;
			reverseNum += originNum % 10;
			originNum /= 10;
			size--;
		}
		if (reverseNum == num)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}