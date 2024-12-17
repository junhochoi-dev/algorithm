#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    bool answer = true;
    string str; cin >> str;
    if(str.size() >= 3){
        answer = (str[0] == 'i' && str[1] == 'o') && answer;
        for(int i = 2; i < str.size(); i++) answer = (('0' <= str[i] && str[i] <= '9') && answer);
    } else answer = false;
    cout << (answer ? "Correct" : "Incorrect");
    return 0;
}