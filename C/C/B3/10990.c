//https://www.acmicpc.net/problem/10990

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			for (int j = i; j < n - 1; j++)
				printf(" ");
			printf("*");
			printf("\n");
		}
		else {
			for (int j = i; j < n - 1; j++)
				printf(" ");
			printf("*");
			for (int k = 0; k < 2 * i - 1; k++)
				printf(" ");
			printf("*");
			printf("\n");
		}
	}

	return 0;
}