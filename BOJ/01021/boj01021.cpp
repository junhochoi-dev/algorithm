#include <iostream>
#include <vector>
using namespace std;
vector<int> que, pop_order;
int N, M;
void left_shift(vector<int> &que){
    int tmp = que.front();
    que.erase(que.begin());
    que.push_back(tmp);
}
void right_shift(vector<int> &que){
    vector<int> tmp;
    int size = que.size() - 1;
    tmp.push_back(que.back());
    que.pop_back();
    for(int n = 0 ; n < size ; n++){
        tmp.push_back(que.front());
        que.erase(que.begin());
    }
    que = tmp;
}
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int order, idx, left = 0 , right = 0;
    cin >> N >> M;
    // insert order
    for(int n = 0 ; n < N ; n++) que.push_back(n + 1);
    
    // insert pop_order
    for(int n = 0 ; n < M ; n++){
        cin >> order;
        pop_order.push_back(order);
    }
    // searching index
    while(!pop_order.empty()){
        
        for(int n = 0 ; n < que.size() ; n++){
           if(pop_order.front() == que[n]){
                idx = n;
                break;
            }
        }
        // compare value size
        if(idx == 0)
            goto JMP;
        if(que.size() / 2 >= idx){
            for(int n = 0 ; n < idx ; n++){
                left_shift(que);
                left++;
            }
        }
        else{
            for(int n = 0 ; n < que.size() - idx ; n++){
                right_shift(que);
                right++;
            }
        }
        JMP:
        // pop front value of que and front value of pop_order
        que.erase(que.begin());
        pop_order.erase(pop_order.begin());
    }
    cout << left + right << endl;
    return 0;
}