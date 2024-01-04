//https://www.acmicpc.net/problem/11728
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int compare2(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 > num2)
		return 1;
	else if (num1 < num2)
		return -1;
	else
		return 0;
}

int main(void)
{
	int n, m, tot;

	scanf("%d%d", &n, &m);

	tot = n + m;

	int* arr = (int*)malloc(sizeof(int) * tot);
	int* arr1 = (int*)malloc(sizeof(int) * n);
	int* arr2 = (int*)malloc(sizeof(int) * m);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr1[i]);

	for (int j = 0; j < m; j++)
		scanf("%d", &arr2[j]);

	for (int k = 0; k < tot; k++) {
		if (k < n)
			arr[k] = arr1[k];
		else
			arr[k] = arr2[k - n];
	}

	qsort(arr, tot, sizeof(int), compare2);

	for (int l = 0; l < tot; l++)
		printf("%d ", arr[l]);

	free(arr);
	free(arr1);
	free(arr2);

	return 0;
}