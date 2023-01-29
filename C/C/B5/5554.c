//https://www.acmicpc.net/problem/5554
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int a, b, c, d;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	int tot = a + b + c + d;

	printf("%d\n%d", tot / 60, tot % 60);

	return 0;
}