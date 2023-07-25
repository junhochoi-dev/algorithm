#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	getline(cin, str);
	for (int n = str.size() - 1; n >= 0 ; n--) {
		if (!(str[n] >= 'A' && str[n] <= 'Z'))
			str.erase(n, 1);
	}
	for (int n = 0; n < str.size(); n++) {
		if (str[n] == 'U')
			for (int m = n + 1; m < str.size(); m++)
				if (str[m] == 'C')
					for (int i = m + 1; i < str.size(); i++)
						if(str[i] == 'P')
							for (int j = i + 1; j < str.size(); j++)
								if (str[j] == 'C') {
									cout << "I love UCPC" << endl;
									return 0;
								}
	}
	cout << "I hate UCPC" << endl;
 	return 0;
}