#include <iostream>
#include <string>
#include <deque>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    deque<char> left, right;
    char order, value;
    int sz;
    string str;
    cin >> str;
    for (int n = 0; n < str.size(); n++) left.push_back(str[n]);
    cin >> sz;
    while (sz--) {
        cin >> order;
        switch (order) {
        case 'L':
            if (!left.empty()) {
                right.push_front(left.back());
                left.pop_back();
            }
            break;
        case 'D':
            if (!right.empty()) {
                left.push_back(right.front());
                right.pop_front();
            }
            break;
        case 'B':
            if (!left.empty()) left.pop_back();
            break;
        case 'P':
            cin >> value;
            left.push_back(value);
            break;
        }
    }
    while (!left.empty()) {
        cout << left.front();
        left.pop_front();
    }
    while (!right.empty()) {
        cout << right.front();
        right.pop_front();
    }
    return 0;
}