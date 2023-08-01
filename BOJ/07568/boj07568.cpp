#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main() {
    int size, kg, cm, *arr;
    vector<pair<int,int>> vt;
    cin >> size;
    arr = new int[size];
    fill(arr, arr + size, 1);
    for(int n = 0 ; n < size ; n++){
        cin >> kg >> cm;
        vt.push_back(make_pair(kg, cm));
    }
    for(int n = 0 ; n < size ; n++){
        for(int m = 0 ; m < size ; m++){
            if(n == m) continue;
            if(vt[n].first < vt[m].first && vt[n].second < vt[m].second) arr[n]++;
        }
    }
    for(int n = 0 ; n < size ; n++){
        cout << arr[n] << ' ';
    }
    cout << endl;
    return 0;
}