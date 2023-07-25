#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    queue<int> circle, josephus;
    int N, K;
    cin >> N >> K;
    for(int n = 1 ; n <= N ; n++) circle.push(n);
    while(!circle.empty()){
        for(int n = 0 ; n < K - 1 ; n++){
            circle.push(circle.front());
            circle.pop();
        }
        josephus.push(circle.front());
        circle.pop();
    }
    cout << '<';
    for(int n = 0 ; n < N ; n++){
        if(n == N - 1){
            cout << josephus.front();
            break;
        }
        cout << josephus.front() << ", ";
        josephus.pop();
    }
    cout << '>';
    return 0;
}