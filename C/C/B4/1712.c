//https://www.acmicpc.net/problem/1712
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c;
	int temp;
	scanf("%d %d %d", &a, &b, &c);
	if (b >= c)
		printf("-1");
	else {
		temp = c - b;
		printf("%d", a / temp + 1);
	}
	return 0;
}