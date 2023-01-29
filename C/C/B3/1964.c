//https://www.acmicpc.net/problem/1964

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	long long n, tot = 5, step = 7;
	scanf("%lld", &n);
	for (int i = 1; i < n; i++) {
		tot += step;
		step += 3;
	}
	printf("%lld", tot % 45678);
	return 0;
}