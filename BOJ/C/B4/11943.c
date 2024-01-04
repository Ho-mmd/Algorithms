//https://www.acmicpc.net/problem/11943
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", (a + d) < (b + c) ? (a + d) : (b + c));
	return 0;
}