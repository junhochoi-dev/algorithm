#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    int ax, ay, bx, by;
    
	ax = a / 4;
    if(a % 4 != 0) ax++;
    
    if(a % 4 == 0) ay = 4;
    else ay = a % 4;
    
    bx = b / 4;
    if(b % 4 != 0) bx++;
    
    if(b % 4 == 0) by = 4;
    else by = b % 4;
    
    cout << abs(ax - bx) + abs(ay - by) << endl;
    return 0;
}