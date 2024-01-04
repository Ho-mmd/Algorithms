//https://www.acmicpc.net/problem/15964
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	long long a, b;

	scanf("%lld %lld", &a, &b);

	printf("%lld", (a + b) * (a - b));

	return 0;
}