#include <iostream>
using namespace std;
int main(){
	int arr[1001] = {0, };
	int N, M, L, index = 1, sum = -1;
	cin >> N >> M >> L;
	while(true){
		arr[index]++;
		if(arr[index] == M){
			break;
		}
		if(arr[index] % 2 == 1){ //홀수 시계방향
			(index + L > N) ? (index = index + L - N) : (index += L);
		}
		else{ //짝수 반시계방향
			(index - L <= 0) ? (index = N + index - L) : (index -= L);
		}
	}
	for(int n = 1 ; n <= N; n++){
		sum += arr[n];
	}
	cout << sum << endl;
	return 0;
}