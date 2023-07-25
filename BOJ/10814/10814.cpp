#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <tuple>
using namespace std;
bool compare(const tuple<int, string, int> p1, const tuple<int, string, int> p2){
    if(get<0>(p1) == get<0>(p2))
        return get<2>(p1) < get<2>(p2);
    return get<0>(p1) < get<0>(p2);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cnt, age;
    string name;
    vector<tuple<int, string, int>> subscriber;
    cin >> cnt;
    for(int n = 0 ; n < cnt ; n++){
        cin >> age >> name;
        subscriber.push_back(make_tuple(age, name, n));
    }
    sort(subscriber.begin(), subscriber.end(), compare);
    for(int n = 0 ; n < cnt ; n++){
        cout << get<0>(subscriber[n]) << ' ' << get<1>(subscriber[n]) << '\n';
    }
    return 0;
}