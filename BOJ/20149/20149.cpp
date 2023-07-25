#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
#define endl '\n'

#define dot pair<long, long>
#define line pair<dot, dot>

long long ccw(dot a, dot b, dot c){
	long long tmp = (b.first - a.first) * (c.second - a.second) - (c.first - a.first) * (b.second - a.second);
	if(tmp > 0) return 1;
	else if(tmp < 0) return -1;
	else return 0;
}

void isMeet(line a, line b){
	bool intersect = false;
	long long ccw1 = ccw(a.first, a.second, b.first);
	long long ccw2 = ccw(a.first, a.second, b.second);
	long long ccw3 = ccw(b.first, b.second, a.first);
	long long ccw4 = ccw(b.first, b.second, a.second);
	
	long long ccwA = ccw1 * ccw2;
	long long ccwB = ccw3 * ccw4;
	if(ccwA <= 0 && ccwB <= 0){
		if(ccwA == 0 && ccwB == 0){
			if(a.first > a.second) swap(a.first, a.second);
			if(b.first > b.second) swap(b.first, b.second);
			intersect = a.first <= b.second && b.first <= a.second;
		}
		intersect = true;
	}
	if(!intersect) cout << 0 << endl;
	else{
		if(ccwA == 0 && ccwB == 0){
			if(ccw1 == 0 && ccw2 == 0 && ccw3 == 0 && ccw4 == 0){ // same inclination
				if(a.second < b.first || b.second < a.first) cout << 0 << endl;
				else{
					cout << 1 << endl;
					if(a.first == b.second) cout << a.first.first << ' ' << a.first.second << endl;
					if(a.second == b.first) cout << a.second.first << ' ' << a.second.second << endl;
				}
			}
			else{ // one dot + not cross
				if(a.first == b.second || a.first == b.first) {
					cout << 1 << endl;
					cout << a.first.first << ' ' << a.first.second << endl;
				}
				if(a.second == b.first || a.second == b.second) {
					cout << 1 << endl;
					cout << a.second.first << ' ' << a.second.second << endl;
				}
			}
		}
		else{ // different inclination
			cout << 1 << endl;
			long long x1 = a.first.first;
			long long x2 = a.second.first;
			long long y1 = a.first.second;
			long long y2 = a.second.second;
			
			long long x3 = b.first.first;
			long long x4 = b.second.first;
			long long y3 = b.first.second;
			long long y4 = b.second.second;
			
			double x = (x1 * y2 - y1 * x2) * (x3 - x4)  - (x1 - x2) * (x3 * y4 - y3 * x4);
			x /= (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
			
			double y = (x1 * y2 - y1 * x2) * (y3 - y4)  - (y1 - y2) * (x3 * y4 - y3 * x4);
			y /= (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
			
			cout << x << ' ' << y << endl;
		}
	}
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    	
	cout << fixed;
	cout.precision(9);
	long long x1, x2, y1, y2;
	line l[2];
	for(int n = 0 ; n < 2 ; n++){
		cin >> x1 >> y1 >> x2 >> y2;
		l[n] = {{x1, y1}, {x2, y2}};
	}
	isMeet(l[0], l[1]);
    return 0;
}