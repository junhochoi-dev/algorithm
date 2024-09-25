#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    map<string, double> itemList;
    itemList.insert(make_pair("Paper", 57.99));
    itemList.insert(make_pair("Printer", 120.50));
    itemList.insert(make_pair("Planners", 31.25));
    itemList.insert(make_pair("Binders", 22.50));
    itemList.insert(make_pair("Calendar", 10.95));
    itemList.insert(make_pair("Notebooks", 11.20));
    itemList.insert(make_pair("Ink", 66.95));
    cout<<fixed;
    cout.precision(2);
    double answer = 0;
    while(true){
        string item; cin >> item;
        if(item == "EOI") break;
        answer += itemList[item];
    }
    cout << "$" << answer << endl;
    return 0;
}