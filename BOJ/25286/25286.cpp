#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
using namespace std;
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int day[13] = {0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
bool leapYear(int year){
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) return true;
	return false;
}
int main() {
    fastio;
    int sz, year, month;
    cin >> sz;
    while(sz--){
    	cin >> year >> month;
    	if(month != 1){
    		month--;
    		if(month == 2){
    			if(leapYear(year)) day[month] = 29;
    			else day[month] = 28;
			}
		}
		else{ // month == 1
			year--;
			month = 12;
		}
		cout << year << ' ' << month << ' ' << day[month] << endl;
	}
	return 0;
}