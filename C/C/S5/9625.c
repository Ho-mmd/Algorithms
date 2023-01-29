//https://www.acmicpc.net/problem/9625
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n;
	int arr[4] = { 1, 0, 0, 0 };

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		arr[3] += arr[0];
		arr[2] += arr[1];
		arr[3] += arr[1];

		arr[0] = arr[2];
		arr[1] = arr[3];
		arr[2] = 0;
		arr[3] = 0;
	}

	printf("%d %d", arr[0], arr[1]);

	return 0;
}