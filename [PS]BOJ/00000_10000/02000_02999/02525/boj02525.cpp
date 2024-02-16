#include <iostream>
using namespace std;
int main() {
    int hour, min, time;
    cin >> hour >> min >> time;
    min += time;
    hour += min / 60;
    min %= 60;
    hour %= 24;
    cout << hour << ' ' << min << endl;
    return 0;
}