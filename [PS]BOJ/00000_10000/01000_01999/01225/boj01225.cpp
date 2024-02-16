#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a;
    string b;
    long long sumA = 0, sumB = 0;
    cin >> a >> b;
    for(int n = 0 ; n < a.size() ; n++) sumA += a[n] - '0';
    for(int n = 0 ; n < b.size() ; n++) sumB += b[n] - '0';
    cout << sumA * sumB << endl;
    return 0;
}