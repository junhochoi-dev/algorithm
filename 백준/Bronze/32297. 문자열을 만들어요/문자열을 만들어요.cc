#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N; cin >> N;
    string str; cin >> str;
    bool answer = false;
    loop(i, N - 3) if(str[i] == 'g' && str[i + 1] == 'o' && str[i + 2] == 'r' && str[i + 3] == 'i') answer = true;
    cout << (answer ? "YES" : "NO") << endl;
    return 0;
}