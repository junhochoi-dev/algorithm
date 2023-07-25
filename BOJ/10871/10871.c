#include <stdio.h>
int main()
{
	int count, max;
	int num;
	scanf("%d %d", &count, &max);

	for (int n = 1; n <= count; n++)
	{
		scanf("%d", &num);
		if (num < max)
			printf("%d ", num);
	}
	return 0;
}