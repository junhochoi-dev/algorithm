#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int ground[500][500] = {0, };
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, B, height_max, sec, min_sec, maximum = 0;
    double average = 0;
    cin >> N >> M >> B;
    for(int n = 0 ; n < N ; n++){
        for(int m = 0 ; m < M ; m++){
            cin >> ground[n][m];
            average += ground[n][m];
        }
    }
    average += B;
    average /= N * M;
    height_max = (int)average;
    vector<pair<int, int>> vt;
    min_sec = 2147483647;
    maximum = height_max;
    for(int k = 0 ; k <= height_max ; k++){
        sec = 0;
        for(int n = 0 ; n < N ; n++){
            for(int m = 0 ; m < M ; m++){
                if(ground[n][m] > k)
                    sec += (ground[n][m] - k) * 2;
                else if(ground[n][m] < k)
                    sec += k - ground[n][m];
            }
        }
        if(min_sec > sec)
            min_sec = sec;
        vt.push_back(make_pair(sec, k));
    }
    for(int k = 0 ; k <= height_max ; k++){
        if(min_sec == vt[k].first)
            maximum = vt[k].second;
        if((min_sec == vt[k].first) && (maximum < vt[k].second))
            maximum = vt[k].second;
    }
    cout << min_sec << ' ' << maximum << endl;
    return 0;
}
