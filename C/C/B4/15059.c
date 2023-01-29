//https://www.acmicpc.net/problem/15059
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c, d, e, f;
	int total = 0;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	if (d > a)
		total += d - a;
	if (e > b)
		total += e - b;
	if (f > c)
		total += f - c;

	printf("%d", total);

	return 0;
}