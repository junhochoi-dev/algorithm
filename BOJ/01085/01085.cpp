#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	cout << min(min(x,y), min(w-x,h-y));
	return 0;
}