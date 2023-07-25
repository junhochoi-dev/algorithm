#include <stdio.h>
int main()
{
	int count, max = 0;
	double num[1000], sum = 0;
	scanf("%d", &count);
	for (int n = 0; n < count; n++)
	{
		scanf("%lf", &num[n]);
		if (max < num[n])
			max = num[n];
	}
	for (int n = 0; n < count; n++)
	{
		num[n] = num[n] / max * 100;
		sum += num[n];
	}
	printf("%.2f", sum / count);
	return 0;
}