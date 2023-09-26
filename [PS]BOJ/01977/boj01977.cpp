#include <iostream>
using namespace std;
int main(){
    int M, N, min = 10001, sum = 0;
    cin >> M >> N;
    for(int n = 1 ; n <= 100 ; n++){
        if(n * n >= M && n * n <= N){
            sum += n * n;
            if(n * n < min)
                min = n * n;
        }
    }
    if(sum == 0)
        cout << -1 << endl;
    else
        cout << sum << endl << min << endl;
    return 0;
}