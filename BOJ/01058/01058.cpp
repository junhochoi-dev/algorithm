#include <iostream>
#include <vector>
#include <string>
#include <queue>
#define endl '\n'
using namespace std;
vector<int> PERSON[50];
int FRIEND[50] = {0, };
bool visited[50];
int cnt;
int searching_friend(int number);
void friend_of_friend(int number);
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int N, max = 0;
    string relationship;
    cin >> N;
    for(int n = 0 ; n < N ; n++){
        cin.ignore();
        cin >> relationship;
        for(int m = 0 ; m < relationship.size() ; m++){
            if(relationship[m] == 'Y'){
                PERSON[n].push_back(m);
                PERSON[m].push_back(n);
            }
        }
    }
    for(int n = 0 ; n < N ; n++){
        cnt = 0;
        for(int m = 0 ; m < N ; m++) visited[m] = false;
        searching_friend(n) > max ? max = searching_friend(n) : max;
    }
    cout << max << endl;
    return 0;
}
int searching_friend(int number){
    visited[number] = true;
    queue<int> que;
    for(int n = 0 ; n < PERSON[number].size() ; n++){
       if(!visited[PERSON[number][n]]){
            visited[PERSON[number][n]] = true;
            que.push(PERSON[number][n]);
            cnt++;
       }
    }
    int tmp_size = que.size();
    for(int n = 0 ; n < tmp_size; n++){
        friend_of_friend(que.front());
        que.pop();
    }
    return cnt;
}
void friend_of_friend(int number){
    for(int n = 0 ; n < PERSON[number].size() ; n++){
       if(!visited[PERSON[number][n]]){
            visited[PERSON[number][n]] = true;
            cnt++;
       }
    }
}
