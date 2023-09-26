#include <stdio.h>
void SelectionSort(int *arr, int size);
void Swap(int *a, int *b);
int main()
{
	int numA[50], numB[50];
	int count, sum = 0;
	scanf("%d", &count);

	for (int n = 0; n < count; n++)
		scanf("%d", &numA[n]);

	for (int n = 0; n < count; n++)
		scanf("%d", &numB[n]);

	SelectionSort(numA, count);
	SelectionSort(numB, count);

	for (int n = 0; n < count; n++)
		sum += numA[n] * numB[count - n - 1];

	printf("%d\n", sum);
	return 0;
}

void Swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void SelectionSort(int *arr, int size)
{
	for (int i = 0; i < size - 1; i++) {
		int minidx = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[minidx] > arr[j]) {
				minidx = j;
			}
		}
		Swap(&arr[minidx], &arr[i]);
	}
}