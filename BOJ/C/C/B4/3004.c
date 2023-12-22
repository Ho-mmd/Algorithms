//https://www.acmicpc.net/problem/3004
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);

	switch (a) {
	case 1:
		printf("2");
		break;
	default:
		printf("%d", (a / 2 + 1) * (a - a / 2 + 1));
	}

	return 0;
}