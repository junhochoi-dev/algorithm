#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int N;
string str_minimum, str_maximum;
ll minimum = LONG_LONG_MAX, maximum = LONG_LONG_MIN;
int num[10];
bool visited[10];
char inequality_sign[9];

bool compare(int a, int b, char s){
    if(s == '>') return a > b;
    else return a < b;
}

void backtracking(int idx){
    if(idx == N + 1) {
        ll val = 0; string str_val;
        loop(i, N + 1){
            val *= 10;
            val += num[i];
            str_val += to_string(num[i]);
        }
        if(minimum > val) {
            minimum = val;
            str_minimum = str_val;
        }
        if(maximum < val) {
            maximum = val;
            str_maximum = str_val;
        }
        return;
    }
    loop(n, 10){
        if(visited[n]) continue;
        if(idx != 0 && !compare(num[idx - 1], n, inequality_sign[idx - 1])) continue;
        visited[n] = true; num[idx] = n;
        backtracking(idx + 1);
        visited[n] = false;
    }
}

int main() {
    fastio
    cin >> N; loop(i, N) cin >> inequality_sign[i];
    backtracking(0);
    cout << str_maximum << endl << str_minimum << endl;
    return 0;
}

