#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    while(true){
        int year; cin >> year;
        if(year == 0) break;
        if(1896 <= year and year % 4 == 0){
            if((1914 <= year && year <= 1918) || (1939 <= year && year <= 1945)){
                cout << year << " Games cancelled" << endl;
            } else if(2020 < year) {
                cout << year << " No city yet chosen" << endl;
            } else cout << year << " Summer Olympics" << endl;
        } else cout << year << " No summer games" << endl;
    }
    return 0;
}