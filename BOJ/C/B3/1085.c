//https://www.acmicpc.net/problem/1085
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c, d, xsh = 0, ysh = 0;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	xsh = c - a;
	ysh = d - b;
	xsh = xsh < a ? xsh : a;
	ysh = ysh < b ? ysh : b;
	if (xsh > ysh)
		printf("%d", ysh);
	else
		printf("%d", xsh);

	return 0;
}