#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N; cin >> N;
    while(N--){
        string str; cin >> str;
        int consonant = 0, vowel = 0;
        loop(i, str.size()){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') vowel++;
            else consonant++;
        }
        cout << str << endl << (vowel > consonant) << endl;
    }
    return 0;
}

