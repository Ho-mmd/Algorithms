//https://www.acmicpc.net/problem/10992

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		if (i == n - 1) {
			for (int a = 0; a < 2 * n - 1; a++) {
				printf("*");
			}
		}
		else {
			for (int j = n - i - 1; j > 0; j--) {
				printf(" ");
			}
			printf("*");
			if (i == 0)
				printf("\n");
			else {
				for (int k = 0; k < 2 * i - 1; k++) {
					printf(" ");
				}
				printf("*\n");
			}
		}
	}
}