#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool compare_string(string a, string b);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<string> arr;
    int cnt;
    string str, tmp;
    cin >> cnt;
    for(int n = 0 ; n < cnt ; n++){
        cin.ignore();
        cin >> str;
        arr.push_back(str);
    }
    sort(arr.begin(), arr.end(), compare_string);
    for(int n = 0 ; n < cnt ; n++){
        if(tmp == arr[n])
            continue;
        cout << arr[n] << '\n';
        tmp = arr[n];
    }
	return 0;
}
bool compare_string(string a, string b){
    if(a.size() == b.size()) return a < b;
    else return a.size() < b.size();
}