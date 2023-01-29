//https://www.acmicpc.net/problem/1008
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b;

	scanf("%d %d", &a, &b);

	printf("%.9lf", (double)a / b);

	return 0;
}