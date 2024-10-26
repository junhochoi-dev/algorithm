#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int answer = 0, value = 1;
    stack<char> stack;
    string str; cin >> str;
    loop(i, str.size()){
        if(str[i] == '(' || str[i] == '['){
            stack.push(str[i]);
            if(str[i] == '(') value *= 2;
            if(str[i] == '[') value *= 3;
        } else {
            if(str[i] == ')'){
                if(stack.empty() || stack.top() != '('){
                    answer = 0;
                    break;
                } else if(str[i - 1] == '(') answer += value;
                value /= 2;
            }
            if(str[i] == ']'){
                if(stack.empty() || stack.top() != '['){
                    answer = 0;
                    break;
                } else if(str[i - 1] == '[') answer += value;
                value /= 3;
            }
            stack.pop();
        }
    }
    cout << (!stack.empty() ? 0 : answer) << endl;
    return 0;
}
