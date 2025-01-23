#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

#define SIZE 401

int main() {
    fastio
    int T; cin >> T;
    char arr[100][100];
    while(T--){
        string str; cin >> str;
        loop(i, str.size()) loop(j, str.size()) arr[i][j] = ' ';
        loop(i, str.size()){
            arr[0][i] = arr[i][0] = str[i];
            arr[str.size() - 1][str.size() - 1 - i] = arr[str.size() - 1 - i][str.size() - 1] = str[i];
        }
        loop(i, str.size()){
            loop(j, str.size()){
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}