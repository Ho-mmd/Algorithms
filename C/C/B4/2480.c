//https://www.acmicpc.net/problem/2480
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int max = a > b ? a : b;
	max = max > c ? max : c;
	if (a == b && b == c)
		printf("%d", 10000 + c * 1000);
	else if (a == b && b != c)
		printf("%d", 1000 + a * 100);
	else if (a == c && c != b)
		printf("%d", 1000 + a * 100);
	else if (b == c && c != a)
		printf("%d", 1000 + b * 100);
	else
		printf("%d", max * 100);

	return 0;
}