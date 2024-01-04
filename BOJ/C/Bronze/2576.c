//https://www.acmicpc.net/problem/2576

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	int* a, sum = 0, min = 100;
	a = (int*)malloc(sizeof(int) * 7);
	for (int i = 0; i < 7; i++) {
		scanf("%d", &a[i]);

		if (a[i] % 2 == 1) {
			if (min > a[i])
				min = a[i];
			sum += a[i];
		}
	}
	free(a);
	if (sum == 0)
		printf("-1");
	else
		printf("%d\n%d", sum, min);
	return 0;
}