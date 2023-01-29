//https://www.acmicpc.net/problem/5086

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	while (1) {
		int a, b;
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
			return 0;
		else if (a > b && a % b == 0) {
			printf("multiple\n");
		}
		else if (a < b && b % a == 0) {
			printf("factor\n");
		}
		else
			printf("neither\n");
	}
	return 0;
}