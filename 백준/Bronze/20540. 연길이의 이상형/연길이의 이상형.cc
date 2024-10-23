#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int kimbab[1000000];
int main() {
    fastio
    char alphabet[26];
    alphabet['E' - 'A'] = 'I'; alphabet['I' - 'A'] = 'E';
    alphabet['S' - 'A'] = 'N'; alphabet['N' - 'A'] = 'S';
    alphabet['F' - 'A'] = 'T'; alphabet['T' - 'A'] = 'F';
    alphabet['J' - 'A'] = 'P'; alphabet['P' - 'A'] = 'J';
    string yeongil; cin >> yeongil;
    loop(i, yeongil.size()) cout << alphabet[yeongil[i] - 'A'];
    return 0;
}
