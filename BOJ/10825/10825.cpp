#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <tuple>
using namespace std;
// 1. name / 2. korean / 3. english / 4. math
bool compare(const tuple<string, int, int, int> p1, const tuple<string, int, int ,int> p2){
    if(get<1>(p1) == get<1>(p2) && get<2>(p1) == get<2>(p2) && get<3>(p1) == get<3>(p2))
        return get<0>(p1) < get<0>(p2);
    else if(get<1>(p1) == get<1>(p2) && get<2>(p1) == get<2>(p2))
        return get<3>(p1) > get<3>(p2);
    else if(get<1>(p1) == get<1>(p2))
        return get<2>(p1) < get<2>(p2);
    return get<1>(p1) > get<1>(p2);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cnt, korean, english, math;
    string name;
    vector<tuple<string, int, int, int>> student;
    cin >> cnt;
    for(int n = 0 ; n < cnt ; n++){
        cin >> name >> korean >> english >> math;
        student.push_back(make_tuple(name, korean, english, math));
    }
    sort(student.begin(), student.end(), compare);
    for(int n = 0 ; n < cnt ; n++){
        cout << get<0>(student[n]) << '\n';
    }
    return 0;
}