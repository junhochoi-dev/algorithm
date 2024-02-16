#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str = "SciComLove";
    int N;
    cin >> N;
    N %= 10;
    for(int n = N ; n < str.size() ; n++) cout << str[n];
    for(int n = 0 ; n < N ; n++) cout << str[n];
    cout << endl;
    return 0;
}