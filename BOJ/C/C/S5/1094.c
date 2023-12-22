//https://www.acmicpc.net/problem/1094
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, len = 64, cnt = 1;

	scanf("%d", &n);

	while (len > n)
		len /= 2;

	n -= len;

	while (n != 0) {
		if (len <= n) {
			n -= len;
			cnt++;
		}
		len /= 2;
	}

	printf("%d", cnt);

	return 0;
}