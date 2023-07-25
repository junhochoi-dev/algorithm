#include <iostream>
using namespace std;
int main() {
	int test_case, HP, MP, A, D, sum;
	int plus_HP, plus_MP, plus_A, plus_D;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		sum = 0;
		cin >> HP >> MP >> A >> D >> plus_HP >> plus_MP >> plus_A >> plus_D;
		sum += (HP + plus_HP) < 1 ? 1 : HP + plus_HP;
		sum += 5 * ((MP + plus_MP) < 1 ? 1 : (MP + plus_MP));
		sum += 2 * ((A + plus_A) < 0 ? 0 : (A + plus_A));
		sum += 2 * (D + plus_D);
		cout << sum << endl;
	}

	return 0;
}