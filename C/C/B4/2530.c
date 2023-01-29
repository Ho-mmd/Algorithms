//https://www.acmicpc.net/problem/2530
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c, d;
	int h, m, s;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	a *= 3600;
	b *= 60;
	int tot = (a + b + c + d);
	h = tot / 3600;
	m = tot % 3600 / 60;
	s = tot % 3600 % 60;

	while (h > 23)
		h -= 24;

	printf("%d %d %d", h, m, s);

	return 0;
}