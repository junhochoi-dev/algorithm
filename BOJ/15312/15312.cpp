#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'

int main() {
    fastio
    int alphabet[26] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};
    string a, b;
    int arr[2000][2000];
    cin >> a >> b;
    for(int n = 0, m = 0 ; n < a.size() * 2 ; n += 2, m++) arr[0][n] = alphabet[a[m] - 'A'];
    for(int n = 1, m = 0 ; n < b.size() * 2 ; n += 2, m++) arr[0][n] = alphabet[b[m] - 'A'];
    loop(n, a.size() * 2 - 1) loop(m, a.size() - n - 1) arr[n + 1][m] = (arr[n][m] + arr[n][m + 1]) % 10;
    cout << arr[a.size()-2][0] << arr[a.size()-2][1] << endl;
    return 0;
}