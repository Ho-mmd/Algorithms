//https://www.acmicpc.net/problem/13866
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	int res = (d + a) - (b + c);
	if (res < 0)
		printf("%d", -res);
	else
		printf("%d", res);

	return 0;
}