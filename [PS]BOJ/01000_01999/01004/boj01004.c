#include <stdio.h>
#include <math.h>
int main()
{
	int count, planet, n, m;
	int x1, y1, x2, y2;
	int x3, y3, r;
	int stack;
	double dist1, dist2;
	scanf("%d", &count); // how many test do you want?
	for (n = 1; n <= count; n++)
	{
		stack = 0;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2); // start end
		scanf("%d", &planet); // how many planet are there?
		for (m = 1; m <= planet; m++)
		{
			scanf("%d %d %d", &x3, &y3, &r);
			dist1 = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
			dist2 = sqrt((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3));
			if (r > dist1 && r <= dist2)
				stack++;
			else if (r <= dist1 && r > dist2)
				stack++;
		}
		printf("%d\n", stack);
	}

	return 0;
}