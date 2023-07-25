#include <iostream>
using namespace std;

int main() {
	int songs, average;
	cin >> songs >> average;
	cout << songs * average - songs + 1 << endl;
	return 0;
}