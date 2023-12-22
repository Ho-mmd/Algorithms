//https://www.acmicpc.net/problem/3460

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, n, b[100] = { 0 }, c;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &n);
		c = 0;
		while (n >= 2) {
			b[c] = n % 2;
			n /= 2;
			c++;
		}
		b[c] = n;

		for (int i = 0; i <= c; i++) {
			if (b[i] == 1)
				printf("%d ", i);
		}
		printf("\n");
	}

	return 0;
}