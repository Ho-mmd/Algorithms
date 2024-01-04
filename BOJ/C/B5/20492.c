//https://www.acmicpc.net/problem/20492
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);
	printf("%d %d", a * 78 / 100, a * 80 / 100 + a * 20 / 100 * 78 / 100);
	return 0;
}