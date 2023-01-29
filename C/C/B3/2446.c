//https://www.acmicpc.net/problem/2446
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, flag = 1;;
	scanf("%d", &n);

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int k = 2 * (n - i) - 1; k > 0; k--) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = n; i > 0; i--) {
		for (int j = i - 1; j > 0; j--) {
			printf(" ");
		}
		for (int k = 0; k < flag; k++) {
			printf("*");
		}
		flag += 2;
		printf("\n");
	}

	return 0;
}