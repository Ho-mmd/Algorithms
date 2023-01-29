//https://www.acmicpc.net/problem/11931
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int compare5(const void* a, const void* b) {
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
	int n;
	int arr[1000001];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	qsort(arr, n, sizeof(int), compare5);

	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);

	return 0;
}