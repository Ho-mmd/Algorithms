#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	if (*(int*)a > *(int*)b)
		return -1;
	else if (*(int*)a == *(int*)b)
		return 0;
	else
		return 1;
}


int main(void)
{
	int arr[3000];
	int ans[3000];
	int n, m, sum = 0;

	scanf("%d%d", &n, &m);

	for (int i = 0; i < m; i++)
		scanf("%d", &arr[i]);

	for (int j = m - 1; j > 0; j--)
		ans[j] = arr[j] - arr[j - 1];

	qsort(ans, m - 1, sizeof(int), compare);

	for (int i = 0; i < m - 1; i++)
		sum += ans[i];

	printf("%d", sum);

	return 0;
}