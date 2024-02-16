#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int *front, *back, N, M, standard, sum = 0;
    cin >> N >> M;
    front = new int[N];
    back = new int[N];
    for(int n = 0 ; n < N ; n++) cin >> front[n];
    for(int n = 0 ; n < N ; n++) cin >> back[n];
    for(int n = 0 ; n < M ; n++){
        cin >> standard;
        for(int m = 0 ; m < N ; m++)
            if(standard >= front[m]) swap(front[m], back[m]);
    }
    for(int n = 0 ; n < N ; n++) sum += front[n];
    cout << sum << endl;
    return 0;
}