#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int* result, test;
	const int loop[10][4] = {
		{10,10,10,10},
		{1,1,1,1},
		{2,4,8,6},
		{3,9,7,1},
		{4,6,4,6},
		{5,5,5,5},
		{6,6,6,6},
		{7,9,3,1},
		{8,4,2,6},
		{9,1,9,1}
	};

	scanf("%d", &test);
	result = malloc(sizeof(int) * test);
	for (int i = 0; i < test; i++)
	{
		int a, b, computer;
		scanf("%d %d", &a, &b);
		a %= 10;
		for (int j = 0, idx = 0; j < b; j++, idx++)
		{
			if (idx == 4)
				idx = 0;
			computer = loop[a][idx];
		}
		result[i] = computer;
	}

	for (int i = 0; i < test; i++)
		printf("%d\n", result[i]);

	return 0;
}