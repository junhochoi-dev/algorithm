#include <iostream>
using namespace std;
string weekend[] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
int main() {
    int month, day;
    cin >> day >> month;
    switch(month){
        case 1:{
            cout << weekend[day % 7];
            break;
        }
        case 2:{
            cout << weekend[(day + 31) % 7];
            break;
        }
        case 3:{
            cout << weekend[(day + 59) % 7];
            break;
        }
        case 4:{
            cout << weekend[(day + 90) % 7];
            break;
        }
        case 5:{
            cout << weekend[(day + 120) % 7];
            break;
        }
        case 6:{
            cout << weekend[(day + 151) % 7];
            break;
        }
        case 7:{
            cout << weekend[(day + 181) % 7];
            break;
        }
        case 8:{
            cout << weekend[(day + 212) % 7];
            break;
        }
        case 9:{
            cout << weekend[(day + 243) % 7];
            break;
        }
        case 10:{
            cout << weekend[(day + 273) % 7];
            break;
        }
        case 11:{
            cout << weekend[(day + 304) % 7];
            break;
        case 12:{
            cout << weekend[(day + 334) % 7];
            break;
        }
        }
    }
    return 0;
}