#include <iostream>
#include <queue>
#include <string>
#define endl '\n'
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int size, value;
    queue<int> que;
    string order;
    cin >> size;
    for(int n = 0 ; n < size ; n++){
        cin.ignore();
        cin >> order;
        if(order == "push"){
            cin >> value;
            que.push(value);
        }
        else if(order == "pop"){
            if(que.empty()) cout << -1 << endl;
            else {
                cout << que.front() << endl;
                que.pop();
            }
        }
        else if(order == "size"){
            cout << que.size() << endl;
        }
        else if(order == "empty"){
            if(que.empty()) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if(order == "front"){
            if(que.empty()) cout << -1 << endl;
            else cout << que.front() << endl;
        }
        else if(order == "back"){
            if(que.empty()) cout << -1 << endl;
            else cout << que.back() << endl;
        }
    }
    return 0;
}