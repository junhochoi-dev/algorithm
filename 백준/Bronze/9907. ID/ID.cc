#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int kimbab[1000000];
int main() {
    fastio
    string nice, str = "JABCDEFGHIZ"; cin >> nice;
    int multiply[] = {2, 7, 6, 5, 4, 3, 2};
    int index = 0; loop(i, 7) index += (nice[i] - '0') * multiply[i];
    cout << str[index % 11];
    return 0;
}
