//https://www.acmicpc.net/problem/1789
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	unsigned long long n;
	int cnt = 0;

	scanf("%llu", &n);

	for (int i = 1; i <= n; i++) {
		if (n - i >= 0) {
			n -= i;
			cnt++;
		}
		if (n == 0)
			break;
	}

	printf("%d", cnt);

	return 0;
}