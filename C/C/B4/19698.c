//https://www.acmicpc.net/problem/19698
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c, d;
	int max;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	max = (b / d) * (c / d);
	if (max > a)
		printf("%d", a);
	else
		printf("%d", max);

	return 0;
}