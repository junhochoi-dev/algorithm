#include <iostream>
#include <algorithm>
#include <string>
#define endl '\n'
using namespace std;
int factorial(int size){
    int sum = 1;
    for(int n = 1 ; n <= size ; n++) sum *= n;
    return sum;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str, tmp, wrong = "No permutation";
    int cnt;
    while(cin >> str >> cnt){
        tmp = str;
        if(factorial(str.size()) < cnt) tmp = wrong;
        else for(int n = 0 ; n < cnt - 1 ; n++) next_permutation(tmp.begin(), tmp.end());
        cout << str << ' ' << cnt << " = " << tmp << endl;
    }
    return 0;
}