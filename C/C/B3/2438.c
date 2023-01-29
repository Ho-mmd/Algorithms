//https://www.acmicpc.net/problem/2438

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}