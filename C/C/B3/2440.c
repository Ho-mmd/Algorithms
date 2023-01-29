//https://www.acmicpc.net/problem/2440
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	for (int i = a; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}