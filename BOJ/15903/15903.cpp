#include <iostream>
#include <queue>
#include <algorithm>
#define endl '\n'
#define INF 987654321
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    int N, M, val;
    cin >> N >> M;
    priority_queue<long long> pq;
    for(int n = 0 ; n < N ; n++){
        cin >> val;
        pq.push(-val);
    }
    for(int n = 0 ; n < M ; n++){
        long long first, second;
        first = pq.top();
        pq.pop();


        second = pq.top();
        pq.pop();

        pq.push(first + second);
        pq.push(first + second);
    }
    long long sum = 0;
    while(!pq.empty()){
        sum += pq.top();
        pq.pop();
    }
    cout << -sum << endl;
    return 0;
}