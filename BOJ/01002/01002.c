#include <stdio.h>
#include <math.h>
int main()
{
	int x1, y1;
	int x2, y2; // -10000 10000
	int r1, r2; // 10000보다 작거나 같은 자연수
	int count, n;
	double dist;
	scanf("%d", &count);
	for (n = 1; n <= count; n++)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		dist = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
		if (x1 == x2 && y1 == y2 && r1 == r2)
			printf("-1\n");
		else if (r1 + r2 == dist)
			printf("1\n");
		else if (r1 + r2 < dist)
			printf("0\n");
		else
			if (abs(r1 - r2) == dist)
				printf("1\n");
			else if (abs(r1 - r2) > dist)
				printf("0\n");
			else
				printf("2\n");
	}
	return 0;
}