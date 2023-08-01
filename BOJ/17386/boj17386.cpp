#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
#define endl '\n'

#define pll pair<long, long>
#define pllll pair<pll, pll>
long long ccw(pll a, pll b, pll c){
	long long tmp = (b.first - a.first) * (c.second - a.second) - (c.first - a.first) * (b.second - a.second);
	if(tmp > 0) return 1;
	else if(tmp < 0) return -1;
	else return 0;
}

bool isMeet(pllll a, pllll b){
	long long ccw1 = ccw(a.first, a.second, b.first) * ccw(a.first, a.second, b.second);
	long long ccw2 = ccw(b.first, b.second, a.first) * ccw(b.first, b.second, a.second);
	if(ccw1 <= 0 && ccw2 <= 0){
		if(ccw1 == 0 && ccw2 == 0){
			if(a.first > a.second) swap(a.first, a.second);
			if(b.first > b.second) swap(b.first, b.second);
			return a.first <= b.second && b.first <= a.second;
		}
		return true;
	}
	return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	long long x1, x2, y1, y2;
	pllll dot[2];
	for(int n = 0 ; n < 2 ; n++){
		cin >> x1 >> y1 >> x2 >> y2;
		dot[n] = {{x1, y1}, {x2, y2}};
	}
	cout << isMeet(dot[0], dot[1]) << endl;
    return 0;
}

