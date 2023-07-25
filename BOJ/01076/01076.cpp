#include <iostream>
#include <utility>
#include <string>
#include <tuple>
using namespace std;
tuple<string, int, long long> color[10] = { {"black", 0, 1}, {"brown", 1, 10}, {"red", 2, 100}, {"orange", 3, 1000},
    {"yellow", 4, 10000}, {"green", 5, 100000}, {"blue", 6, 1000000}, {"violet", 7, 10000000}, {"grey", 8, 100000000},
    {"white", 9, 1000000000}
};
int main(){
    long long sum = 0;
    string first, second, third;
    cin >> first >> second >> third;
    for(int n = 0 ; n < 10 ; n++){
        if(get<0>(color[n]) == first){
            sum += get<1>(color[n]) * 10;
        }
        if(get<0>(color[n]) == second){
            sum += get<1>(color[n]);
        }
    }
    for(int n = 0 ; n < 10 ; n++){
        if(get<0>(color[n]) == third){
            sum *= get<2>(color[n]);
            break;
        }
    }
    cout << sum << endl;
    return 0;
}