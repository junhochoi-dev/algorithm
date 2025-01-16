#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

#define SIZE 401

int main() {
    fastio
    string str; cin >> str;
    vector<string> substr;
    loop(i, str.size()) substr.push_back(str.substr(i));
    sort(substr.begin(), substr.end());
    cout << substr[substr.size() - 1];
    return 0;
}