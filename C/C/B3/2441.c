//https://www.acmicpc.net/problem/2441
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	for (int i = a; i > 0; i--) {
		for (int j = i; j < a; j++) {
			printf(" ");
		}
		for (int k = i; k > 0; k--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}