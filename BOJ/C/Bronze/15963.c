//https://www.acmicpc.net/problem/15963
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a == b)
		printf("1");
	else
		printf("0");

	return 0;
}