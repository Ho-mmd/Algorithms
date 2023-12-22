//https://www.acmicpc.net/problem/10162
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	int b = 300, c = 60, d = 10;
	if (a % 10 != 0)
		printf("-1");
	else
		printf("%d %d %d", a / 300, a % 300 / 60, a % 60 / 10);

	return 0;
}