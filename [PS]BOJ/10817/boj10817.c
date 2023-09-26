#include <stdio.h>
void Swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void SelectionSort(int *arr, int size)
{
	for (int n = 0; n < size - 1; n++)
	{
		int minidx = n;
		for(int m = n+1;m<size;m++)
		{
			if (arr[minidx] > arr[m])
				minidx = m;
		}
		Swap(&arr[n], &arr[minidx]);
	}
}
int main()
{
	int num[3];
	for (int n = 0; n < 3; n++)
		scanf("%d", &num[n]);

	SelectionSort(num, 3);

	printf("%d\n", num[1]);

	return 0;
}