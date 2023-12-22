//https://www.acmicpc.net/problem/2959

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a[4], i, j, tmp, min;

	for (i = 0; i < 4; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < 4; i++) {
		min = i;
		for (j = i + 1; j < 4; j++) {
			if (a[min] > a[j]) {
				min = j;
			}
		}
		tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
	}

	printf("%d", a[0] * a[2]);

	return 0;
}