//https://www.acmicpc.net/problem/1026
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int compare0(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 > num2)
		return 1;
	else if (num1 < num2)
		return -1;
	else
		return 0;
}
int compare1(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 > num2)
		return -1;
	else if (num1 < num2)
		return 1;
	else
		return 0;
}
int main(void)
{
	int arr1[51] = { 0 }, arr2[51] = { 0 };
	int i, n, sum = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &arr1[i]);
	for (i = 0; i < n; i++)
		scanf("%d", &arr2[i]);

	qsort(arr1, n, sizeof(int), compare0);
	qsort(arr2, n, sizeof(int), compare1);

	for (i = 0; i < n; i++)
		sum += arr1[i] * arr2[i];

	printf("%d", sum);

	return 0;
}