//https://www.acmicpc.net/problem/2442
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, flag = 1;;
	scanf("%d", &n);

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