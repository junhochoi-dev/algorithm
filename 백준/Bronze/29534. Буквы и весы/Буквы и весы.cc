#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, sum = 0; cin >> N;
    string str; cin >> str;
    loop(i, str.size()) sum += str[i] - 'a' + 1;
    cout << (str.size() > N ? "Impossible" : to_string(sum));
    return 0;
}