#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <map>

using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    int N;
    cin >> N;
    cout << "int a;" << endl;
    for(int n = 0 ; n < N ; n++){
        cout << "int ";
        for(int m = 0 ; m < n + 1 ; m++){
            cout << '*';
        }
        cout << "ptr";
        if(n != 0) cout << n + 1;

        if(n != 0) cout << " = &ptr";
        else cout << " = &a";

        if(n != 0 && n != 1) cout << n;
        cout << ';' << endl;
    }
    return 0;
}