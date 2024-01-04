//https://www.acmicpc.net/problem/13752

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n, a;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		for (int j = 0; j < a; j++)
			printf("=");
		printf("\n");
	}

	return 0;
}