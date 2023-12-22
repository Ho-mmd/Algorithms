//https://www.acmicpc.net/problem/11004
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int compare1(const void* a, const void* b) {
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
	int n, a;

	scanf("%d%d", &n, &a);

	int* arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	qsort(arr, n, sizeof(int), compare1);

	printf("%d", arr[a - 1]);

	free(arr);

	return 0;
}