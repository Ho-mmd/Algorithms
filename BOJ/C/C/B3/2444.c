//https://www.acmicpc.net/problem/2444
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, flag = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = n - i - 1; j > 0; j--) {
			printf(" ");
		}
		for (int k = 0; k < flag; k++) {
			printf("*");
		}
		flag += 2;
		printf("\n");
	}

	flag -= 4;

	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; n - i > j; j++) {
			printf(" ");
		}
		for (int k = flag; k > 0; k--) {
			printf("*");
		}
		flag -= 2;
		printf("\n");
	}

	return 0;
}