#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <map>
#include <set>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'

#define MOD 1000000000
int main() {
    fastio
    int alp[26], sum = 0;
    string s1, s2;
    loop(n, 26) alp[n] = 0;
    cin >> s1 >> s2;
    loop(n, s1.size()) alp[s1[n] - 'a']++;
    loop(n, s2.size()) alp[s2[n] - 'a']--;
    loop(n, 26) sum += abs(alp[n]);
    cout << sum << endl;
    return 0;
}