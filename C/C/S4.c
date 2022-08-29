#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	
}

//https://www.acmicpc.net/problem/1051
void BOJ1051() {
	int arr[100][100] = { 0 }, a, b, min, ans = 1;
	int c;

	scanf("%d%d", &a, &b);

	min = a > b ? b : a;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++)
			scanf("%1d", &arr[i][j]);
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			for (int k = 1; k < min; k++) {
				if (i + k < a && j + k < b && arr[i + k][j] == arr[i][j] && arr[i + k][j + k] == arr[i][j] && arr[i][j + k] == arr[i][j]) {
					if (k + 1 > ans)
						ans = k + 1;
				}
			}
		}
	}

	printf("%d", ans * ans);

	return 0;
}

//https://www.acmicpc.net/problem/1026
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
void BOJ1026() {
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