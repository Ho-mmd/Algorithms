//https://www.acmicpc.net/problem/10815
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 > num2)
		return 1;
	else if (num1 < num2)
		return -1;
	else
		return 0;

}
int binarySearch(int arr[], int start, int end, int a) {
	int mid = (start + end) / 2;

	if (start <= end) {
		if (a > arr[mid])
			binarySearch(arr, mid + 1, end, a);
		else if (a < arr[mid])
			binarySearch(arr, start, mid - 1, a);
		else
			return 1;
	}
	else
		return 0;
}

int main(void)
{
	int n, m, cmp;

	scanf("%d", &n);

	int* arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	scanf("%d", &m);

	int* tmp = (int*)malloc(sizeof(int) * m);

	for (int i = 0; i < m; i++)
		scanf("%d", &tmp[i]);

	qsort(arr, n, sizeof(int), compare);

	for (int i = 0; i < m; i++) {
		if (binarySearch(arr, 0, n, tmp[i]) == 1)
			tmp[i] = 1;
		else
			tmp[i] = 0;
	}

	for (int j = 0; j < m; j++)
		printf("%d ", tmp[j]);

	free(arr);
	free(tmp);

	return 0;
}