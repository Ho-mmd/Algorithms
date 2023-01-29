//https://www.acmicpc.net/problem/10824

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	long long a, b, c, d, temp, cnt = 1, i;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	temp = b;
	while (temp / 10 != 0) {
		temp /= 10;
		cnt++;
	}
	for (i = 0; i < cnt; i++) {
		a *= 10;
	}
	a += b;
	cnt = 1;
	temp = d;
	while (temp / 10 != 0) {
		temp /= 10;
		cnt++;
	}
	for (i = 0; i < cnt; i++) {
		c *= 10;
	}
	c += d;

	printf("%lld", a + c);

	return 0;
}