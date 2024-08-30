#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    set<string> birthdays;
    int N; cin >> N;
    while(N--){
        string birthday; cin >> birthday;
        birthdays.insert(birthday);
    }
    cout << birthdays.size() << endl;
    return 0;
}