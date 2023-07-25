#include <iostream>
#include <string>
using namespace std;
int main() {
	int arr[8] = { 0 };
	string str;
	cin >> str;
	for (int n = 0; n < str.size(); n++) {
		switch (str[n])	{
		case 'Z':
		case 'A':
		case 'Q':
		case '1':
			arr[0]++;
			break;
		case 'X':
		case 'S':
		case 'W':
		case '2':
			arr[1]++;
			break;
		case 'C':
		case 'D':
		case 'E':
		case '3':
			arr[2]++;
			break;
		case '4':
		case 'R':
		case 'F':
		case 'V':
		case '5':
		case 'T':
		case 'G':
		case 'B':
			arr[3]++;
			break;
		case '7':
		case '6':
		case 'U':
		case 'Y':
		case 'J':
		case 'H':
		case 'M':
		case 'N':
			arr[4]++;
			break;
		case '8':
		case 'I':
		case 'K':
		case ',':
			arr[5]++;
			break;
		case '9':
		case 'O':
		case 'L':
		case '.':
			arr[6]++;
			break;
		case '0':
		case 'P':
		case ';':
		case '/':
		case '-':
		case '=':
		case ']':
		case '[':
		case '\'':
			arr[7]++;
			break;
		}
	}
	for (int n = 0; n < 8; n++)
		cout << arr[n] << endl;


	return 0;
}