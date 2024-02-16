#include <iostream>
using namespace std;
int main() {
	int count, fight, Mary, John;
	while (true) {
		Mary = John = 0;
		cin >> count;
		if (count == 0)
			break;
		for (int n = 0; n < count; n++) {
			cin >> fight;
			if (fight)
				John++;
			else
				Mary++;
		}
		cout << "Mary won " << Mary	<< " times and John won " << John << " times" << endl;
	}
	return 0;
}
