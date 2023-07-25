#include <iostream>
#include <algorithm>
#include <cmath>
#include <tuple>
#include <vector>
using namespace std;
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pi 3.1415926535
double distance(tuple<double, double, double> a, tuple<double, double, double> b){
	return sqrt(pow(get<0>(a) - get<0>(b), 2) + pow(get<1>(a) - get<1>(b), 2) + pow(get<2>(a) - get<2>(b), 2));
}
double intersectVolume(tuple<double, double, double> a, tuple<double, double, double> b, double r){
	double d = distance(a, b);
	if(d >= 2 * r) return 0;
	return (double)2 / 3 * pi * pow(r - d / 2, 2) * (2 * r + d / 2);
}
int main() {
    fastio;
    vector<tuple<double, double, double>> dots;
    cout << fixed;
    cout.precision(7);
    int sz, r, x, y, z;
    cin >> sz >> r;
    double sum_Volume = sz * 4 * pi * pow(r, 3) / 3;
    for(int n = 0 ; n < sz ; n++){
    	cin >> x >> y >> z;
    	dots.push_back(make_tuple(x, y, z));
	}
	for(int n = 0 ; n < sz ; n++){
		for(int m = n + 1 ; m < sz ; m++){
			sum_Volume -= intersectVolume(dots[n], dots[m], r);
		}
	}
	cout << sum_Volume << endl;
    return 0;
}