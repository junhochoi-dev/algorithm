#include <iostream>
#include <algorithm>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'

int main() {
    fastio
    int in1, in2;
    cin >> in1 >> in2;
    if(in2 - in1 <= 20 && in2 - in1 >= 1) cout << "You are speeding and your fine is $100." << endl;
    else if(in2 - in1 <= 30 && in2 - in1 >= 21) cout << "You are speeding and your fine is $270." << endl;
    else if(in2 - in1 >= 31) cout << "You are speeding and your fine is $500." << endl;
    else cout << "Congratulations, you are within the speed limit!" << endl;
    return 0;
}