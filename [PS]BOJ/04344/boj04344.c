#include <stdio.h>
int main()
{
	int count, num[1000], howmany;
	double average, over;
	scanf("%d", &count);
	for (int n = 1; n <= count; n++)
	{
		average = 0;
		over = 0;
		scanf("%d", &howmany);
		for (int m = 0; m < howmany; m++)
		{
			scanf("%d", &num[m]);
			average += num[m];
		}
		average /= howmany;
		for (int m = 0; m < howmany; m++)
			if (average < num[m])
				over++;
		printf("%.3f%%\n", over / howmany *100);
	}

	return 0;
}