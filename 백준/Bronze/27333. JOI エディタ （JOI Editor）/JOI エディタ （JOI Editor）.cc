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
    loop(i, N){
        if(i + 1 < N && str[i] == str[i + 1]){
            cout << char(str[i] - 'a' + 'A');
            cout << char(str[i] - 'a' + 'A');
            i++;
        } else cout << str[i];
    }
    return 0;
}