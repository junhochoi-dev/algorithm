#include <iostream>
#include <string>
#define endl '\n'
using namespace std;
void reverse(int &value){
    string num, tmp;
    num = tmp = to_string(value);
    for(int n = 0 ; n < num.size(); n++) num[n] = tmp[num.size() - 1 - n];
    value = stoi(num);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int X, Y, tmp;
    cin >> X >> Y;
    reverse(X);
    reverse(Y);
    tmp = X + Y;
    reverse(tmp);
    cout << tmp << endl;
    return 0;
}