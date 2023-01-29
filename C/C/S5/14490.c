//https://www.acmicpc.net/problem/14490
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int GCD(int a, int b) {
	int x = a, y = b, z;

	while (y) {
		z = x % y;
		x = y;
		y = z;
	}

	return x;
}

int main(void)
{
	int a, b, tmp;
	char c;

	scanf("%d%c%d", &a, &c, &b);

	if (a > b)
		tmp = GCD(a, b);
	else
		tmp = GCD(b, a);

	printf("%d:%d", a / tmp, b / tmp);

	return 0;
}