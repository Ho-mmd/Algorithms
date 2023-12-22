//https://www.acmicpc.net/problem/13136
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	long long a, b, c;
	long long row = 0, col = 0;;
	scanf("%lld%lld%lld", &a, &b, &c);
	if (a % c != 0)
		row = a / c + 1;
	else
		row = a / c;

	if (b % c != 0)
		col = b / c + 1;
	else
		col = b / c;

	printf("%lld", row * col);

	return 0;
}