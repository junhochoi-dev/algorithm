#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	int size, len, A, T, G, C, top, cnt;
	cin >> size >> len;
	cin.ignore();
	string *arr = new string[size];
	string *str = new string;
	for (int n = 0; n < size; n++) cin >> arr[n];
	for (int n = 0; n < len; n++) {
		top = A = T = G = C = 0;
		for (int m = 0; m < size; m++) {
			if (arr[m].at(n) == 'A')
				A++;
			if (arr[m].at(n) == 'T')
				T++;
			if (arr[m].at(n) == 'G')
				G++;
			if (arr[m].at(n) == 'C')
				C++;
		} // A C G T
		top = max(max(A, T), max(G, C));
		if (top == A)
			str->push_back('A');
		else if (top == C)
			str->push_back('C');
		else if (top == G)
			str->push_back('G');
		else if (top == T)
			str->push_back('T');
	}
	cout << *str << endl;
	cnt = 0;
	for (int n = 0; n < size; n++) {
		for (int m = 0; m < len; m++) {
			if (str->at(m) != arr[n].at(m))
				cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}