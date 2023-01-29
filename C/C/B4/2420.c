//https://www.acmicpc.net/problem/2420
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	long long a, b;
	scanf("%lld %lld", &a, &b);
	long long tot = a - b;
	if (a - b < 0)
		printf("%lld", -tot);
	else
		printf("%lld", tot);

	return 0;
}