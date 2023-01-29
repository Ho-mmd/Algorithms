//https://www.acmicpc.net/problem/10707
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	int X = a * e;
	int Y = b;
	if (e > c)
		Y = b + (e - c) * d;
	printf("%d", X < Y ? X : Y);

	return 0;
}