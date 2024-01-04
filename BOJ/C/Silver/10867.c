//https://www.acmicpc.net/problem/10867
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n, num;
	int arr[2001] = { 0 };

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		arr[num + 1000] = 1;
	}

	for (int j = 0; j < 2001; j++) {
		if (arr[j] == 1)
			printf("%d ", j - 1000);
	}

	return 0;
}