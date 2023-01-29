//https://www.acmicpc.net/problem/2822
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int compare3(const void* a, const void* b) {
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
	int arr[8], max, tot = 0, con[5];

	for (int i = 0; i < 8; i++)
		scanf("%d", &arr[i]);

	for (int j = 0; j < 5; j++) {
		max = 0;
		for (int k = 0; k < 8; k++) {
			if (arr[k] > max) {
				max = arr[k];
				con[j] = k;
			}
		}
		arr[con[j]] = 0;
		tot += max;
	}

	qsort(con, 5, sizeof(int), compare3);

	printf("%d\n", tot);

	for (int i = 0; i < 5; i++)
		printf("%d ", con[i] + 1);

	return 0;
}