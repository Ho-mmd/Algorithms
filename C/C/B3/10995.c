//https://www.acmicpc.net/problem/10995

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i % 2 == 0) {
				printf("* ");
			}
			else {
				printf(" *");
			}
		}
		printf("\n");
	}
	return 0;
}