#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, h = 0, m = 0, s = 0; cin >> N;
    while(N--){
        string time; cin >> time;
        m += stoi(time.substr(0, 2));
        s += stoi(time.substr(3, 2));
    }
    m += s / 60; s %= 60;
    h += m / 60; m %= 60;
    cout
    << (h / 10 == 0 ? "0" : "") << h
    << ":"
    << (m / 10 == 0 ? "0" : "") << m
    << ":"
    << (s / 10 == 0 ? "0" : "") << s;
    return 0;
}