#include <iostream>
#include <cmath>
int main() {
	double A, B;
	std::cin >> A >> B;
	std::cout << 1 / (1 + pow(10, (B - A) / 400));
}