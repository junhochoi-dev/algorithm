#include <stdio.h>
void combi(int n , int r);
int main()
{
	int num1, num2;
	int count;
	scanf("%d", &count);
	for (int n = 1; n <= count; n++)
	{
		scanf("%d %d", &num1, &num2);
		combi(num2 - num1, num2);
	}
	return 0;
}
void combi(int r, int n)
{
	long long sum = 1;
	int k, m;
	for (m = r + 1, k = 1; m <= n, k <= n - r; m++, k++) {
		sum *= m;
		sum /= k;
	}
	printf("%lld\n", sum);
}