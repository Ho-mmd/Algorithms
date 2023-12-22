//https://www.acmicpc.net/problem/4673
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int sum, a = 1, aa, b, arr[10001], i;

	while (1) {
		sum = 0;
		b = 1;
		sum += a;
		aa = a;
		while (aa != 0) {
			b = aa % 10;
			sum += b;
			aa /= 10;
		}

		if (sum <= 10000)
			arr[sum] = 1;

		a++;

		if (a > 10000)
			break;
	}

	for (i = 1; i < 10001; i++) {
		if (arr[i] != 1)
			printf("%d\n", i);
	}

	return 0;
}