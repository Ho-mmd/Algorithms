//https://www.acmicpc.net/problem/15726
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	long long a, b, c, d, e;
	scanf("%lld%lld%lld", &a, &b, &c);
	d = (double)(a * b) / c;
	e = ((double)a / b) * c;

	printf("%lld", d > e ? d : e);

	return 0;
}