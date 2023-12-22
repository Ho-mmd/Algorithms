//https://www.acmicpc.net/problem/2355

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	long long a, b, tmp;
	scanf("%lld%lld", &a, &b);
	if (b > a) {
		tmp = a;
		a = b;
		b = tmp;
	}

	if ((a - b) % 2 == 0)
		printf("%lld", (a + b - 1) * (a - b) / 2 + a);
	else
		printf("%lld", (a + b) * ((a - b) / 2 + 1));

	return 0;
}