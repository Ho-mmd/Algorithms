//https://www.acmicpc.net/problem/2161
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n, cnt = 1, flag, arr[2001] = { 0 };

	scanf("%d", &n);

	flag = n + 1;

	for (int i = 1; i <= n; i++)
		arr[i] = i;

	for (int j = 1; j <= n; j++) {
		printf("%d ", arr[cnt]);
		cnt++;
		arr[flag] = arr[cnt];
		cnt++;
		flag++;
	}

	return 0;
}