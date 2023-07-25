#include <iostream>
#include <vector>
#include <stack>
#define endl '\n'
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int num, value, cnt = 0;
    vector<int> order;
    vector<char> output;
    stack<int> st;
    cin >> num;
    for(int n = 0 ; n < num ; n++){
        cin >> value;
        order.push_back(value);
    }
    for(int n = 1 ; n <= num ; n++){
        st.push(n);
        output.push_back('+');
        while(!st.empty() && st.top() == order[cnt]){
            st.pop();
            output.push_back('-');
            cnt++;
        }
    }
    if(!st.empty()) cout << "NO" << endl;
    else for(int n = 0 ; n < output.size() ; n++) cout << output[n] << endl;
    return 0;
}