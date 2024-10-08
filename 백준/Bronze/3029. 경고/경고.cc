#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    string curr, next; cin >> curr >> next;
    int curr_time = 0, next_time = 0;
    curr_time += stoi(curr.substr(0, 2)) * 3600;
    curr_time += stoi(curr.substr(3, 2)) * 60;
    curr_time += stoi(curr.substr(6, 2));
    next_time += stoi(next.substr(0, 2)) * 3600;
    next_time += stoi(next.substr(3, 2)) * 60;
    next_time += stoi(next.substr(6, 2));
    if(curr_time >= next_time) next_time += 3600 * 24;
    next_time -= curr_time;
    cout << (next_time / 3600 / 10 == 0 ? "0" : "") << next_time / 3600 << ":"; next_time %= 3600;
    cout << (next_time / 60 / 10 == 0 ? "0" : "") << next_time / 60 << ":"; next_time %= 60;
    cout << (next_time / 10 == 0 ? "0" : "") << next_time;
    return 0;
}
