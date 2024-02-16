#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>

#define endl '\n'

#define INF 987654321
#define MAXSIZE 500001

using namespace std;
class Dot{
public:
	long long x, y;
};
class Line{
public:
	Dot a, b;
	long long w, intersect = 0;
	Line(){}
	Line(long x1, long y1, long x2, long y2, long weight){
		a.x = x1;
		b.x = x2;
		a.y = y1;
		b.y = y2;
		w = weight;
	}
	bool operator < (Line &l){
		//if(this->intersect == l.intersect) 
		return this->w < l.w;
		//return this->intersect > l.intersect;
	}
};
long long ccw(Dot A, Dot B, Dot C){
	long long ans = (B.x - A.x) * (C.y - A.y) - (C.x - A.x) * (B.y - A.y);
	//cout << ans << endl;
	if(ans > 0) return 1;
	if(ans == 0) return 0;
	if(ans < 0) return -1;
}
bool isIntersect(Line A, Line B){
	//cout << "교차 체크" << endl;
	long long ccw1 = ccw(A.a, A.b, B.a) * ccw(A.a, A.b, B.b);
	long long ccw2 = ccw(B.a, B.b, A.a) * ccw(B.a, B.b, A.b);
	//cout << "ccw1 " << ccw1 << endl;
	//cout << "ccw2 " << ccw2 << endl;
	
	if(ccw1 < 0 && ccw2 < 0)
		return true;
	else return false;
}
void test(Line A, Line B){
	long long ccw1 = ccw(A.a, A.b, B.a) * ccw(A.a, A.b, B.b);
	long long ccw2 = ccw(B.a, B.b, A.a) * ccw(B.a, B.b, A.b);
	cout << "ccw1 " << ccw1 << endl;
	cout << "ccw2 " << ccw2 << endl;
}
void show(Line A){
	cout << A.a.x << ' ' << A.a.y << ' ' << A.b.x << ' ' << A.b.y << endl;
	cout << "intersect : " << A.intersect << "/ weight : " << A.w << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Line l[2500];
    int sz;
	long long x1, x2, y1, y2, w;
    cin >> sz;
    for(int n = 0 ; n < sz ; n++){
    	cin >> x1 >> y1 >> x2 >> y2 >> w;
    	Line tmp(x1, y1, x2, y2, w);
    	l[n] = tmp;
    	//show(l[n]);
	}
	for(int n = 0 ; n < sz ; n++){
		for(int m = 0 ; m < sz ; m++){
			if(n == m) continue;
			if(isIntersect(l[n], l[m])) {
				//cout << "교차 체크" << endl;
				//show(l[n]);
				//show(l[m]);
				l[n].intersect++;
			}
		}
	}
	
	sort(l, l + sz);
	
	long long sum = 0;
	for(int n = 0 ; n < sz ; n++){
		sum += l[n].w;
		for(int m = n + 1 ; m < sz ; m++){
			// cout << n << ' ' << m << '#' << endl;
			if(isIntersect(l[n], l[m])) {
				//cout << "intersect" << intersect(l[n], l[m]) << endl;
				//show(l[n]);
				//show(l[m]);
				//test(l[n], l[m]);
				sum += l[n].w;
			}
		}
	}
	cout << sum << endl;
    return 0;
}

