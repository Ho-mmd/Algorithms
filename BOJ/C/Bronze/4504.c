//https://www.acmicpc.net/problem/4504

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, a;
	scanf("%d", &n);
	while (1) {
		scanf("%d", &a);
		if (a == 0)
			break;

		if (a % n == 0)
			printf("%d is a multiple of %d.\n", a, n);
		else
			printf("%d is NOT a multiple of %d.\n", a, n);
	}
	return 0;
}