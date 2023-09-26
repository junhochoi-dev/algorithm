#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define endl '\n'

#include <ctime>
/*
struct tm{
    int tm_sec; // seconds after the minute - [0, 60] including leap second    
    int tm_min; // minutes after the hour - [0, 59]    
    int tm_hour; // hours since midnight - [0, 23]    
    int tm_mday; // day of the month - [1, 31]    
    int tm_mon; // months since January - [0, 11]    
    int tm_year; // years since 1900    
    int tm_wday; // days since Sunday - [0, 6]    
    int tm_yday; // days since January 1 - [0, 365]    
    int tm_isdst; // daylight savings time flag
};
*/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt", "r", stdin);

    time_t rawTime;
    struct tm* pTimeInfo;
    rawTime = time(NULL);
    pTimeInfo = localtime(&rawTime);

    cout << 1900 + pTimeInfo->tm_year << "\n";
    if(1 + pTimeInfo->tm_mon < 10) cout << '0' << 1 + pTimeInfo->tm_mon  << "\n";
    else cout << 1 + pTimeInfo->tm_mon  << "\n";
    if(pTimeInfo->tm_mday < 10) cout << '0' << pTimeInfo->tm_mday  << "\n";
    else cout << pTimeInfo->tm_mday  << "\n";
    return 0;
}