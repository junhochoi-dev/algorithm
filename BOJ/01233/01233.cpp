#include <iostream>
#include <algorithm>
using namespace std;
int freq[81] = {0, };
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
    ios::sync_with_stdio(false);
	int s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	for(int n = 1; n <= s1; n++){
		for(int m = 1; m <= s2; m++){
			for(int k = 1; k <= s3; k++){
				freq[n + m + k]++;
			}
		}
	}
	for(int n = 0 ; n < 81 ; n++){
		if(*max_element(freq, freq + 81) == freq[n]) {
			cout << n;
			break;
		}
	}
	return 0;
}