#include <iostream>
#include <stack>
#include <utility>
#define endl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int size, value;
    cin >> size;
    stack<pair<int, int>> st;
    for(int n = 1 ; n <= size ; n++) {
        cin >> value;
        while(!st.empty()){
            if(st.top().first > value){ cout << st.top().second << ' '; break; }
            st.pop();
        }
        if(st.empty()) cout << "0" << ' ';
        st.push(make_pair(value, n));
    }
    return 0;
}